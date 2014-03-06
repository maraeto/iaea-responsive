<?php
/*
// +--------------------------------------------------------+
// | Implemented 2014/03 by Martin Thaller                  |
// +--------------------------------------------------------+


// +--------------------------------------------------------+
// | run: drush php-script drupal_import.php                |
// +--------------------------------------------------------+


// link replacement
*/

$database = "mtcm_kresso"; // mtcm
$drupaldatabase = "iaea-responsive";

$tables = array("`".$database."`.mt_migrated_link","`".$database."`.mt_migrated_ilink");

for($i=0; $i < sizeOf($tables); $i++)
{
    $query = "SELECT CID,RID,CorrOldURL,OldURL,NewURL FROM ".$tables[$i]." WHERE Imported = '1' AND NewURL = '' AND (CorrOldURL LIKE 'http://www.iaea.org%' OR (OldURL LIKE 'http://www.iaea.org%' AND CorrOldURL='') OR CorrOldURL LIKE '/%' OR (OldURL LIKE '/%' AND CorrOldURL='')) ORDER BY CID,RID";
    $result = db_query($query);

    foreach ($result as $row)
    {
        if ($row->NewURL=="")
        {
            $url = ($row->CorrOldURL!="" ? $row->CorrOldURL : $row->OldURL);

            if (substr($url,0,1)!="/") $url = substr($url, strlen("http://www.iaea.org"));

            if (strpos($url, "#") > 1)
            {
                $append = substr($url, strpos($url, "#"));
                $url = substr($url,0,strpos($url, "#"));
            }
            else
            {
                $append = "";
            }

            $query1 = "SELECT NewLocation FROM `".$database."`.mt_migrated_content WHERE Imported = '1' AND (OldLocation = '".$url."' OR OldLocation LIKE '".$url."#%') AND NewLocation !=''";
            $result1 = db_query($query1);

            foreach ($result1 as $row1)
            {
                $query2 = "UPDATE ".$tables[$i]." SET NewURL = '".$row1->NewLocation.$append."' WHERE CID = '".$row->CID."' AND RID = '".$row->RID."'";
                $result2 = db_query($query2);

                drush_print("updated ".$row->CID."/".$row->RID." redirecting ".$url.$append." => ".$row1->NewLocation.$append);
            }
        }
    }
}

$tables = array("`".$database."`.mt_migrated_image");

for($i=0; $i < sizeOf($tables); $i++)
{
    $query = "SELECT CID,RID,CorrOldURL,OldURL,NewURL,DrupalID FROM ".$tables[$i]." WHERE NewURL = '' AND Imported = '1' AND (CorrOldURL LIKE 'http://www.iaea.org%' OR (OldURL LIKE 'http://www.iaea.org%' AND CorrOldURL='') OR CorrOldURL LIKE '/%' OR (OldURL LIKE '/%' AND CorrOldURL='')) ORDER BY CID,RID";
    $result = db_query($query);

    foreach ($result as $row)
    {
        if ($row->NewURL=="")
        {
            $url = ($row->CorrOldURL!="" ? $row->CorrOldURL : $row->OldURL);

            if (substr($url,0,1)!="/") $url = substr($url, strlen("http://www.iaea.org"));

            if (strpos($url, "#") > 1)
            {
                $append = substr($url, strpos($url, "#"));
                $url = substr($url,0,strpos($url, "#"));
            }
            else
            {
                $append = "";
            }

            $query1 = "SELECT uri FROM `".$drupaldatabase."`.file_managed WHERE fid = ".$row->DrupalID;
            $result1 = db_query($query1);

            foreach ($result1 as $row1)
            {
                $newlocation = str_replace("public://","/sites/default/files/",$row1->uri);

                $query2 = "UPDATE ".$tables[$i]." SET NewURL = '".$newlocation.$append."' WHERE CID = '".$row->CID."' AND RID = '".$row->RID."'";
                $result2 = db_query($query2);

                drush_print("updated ".$row->CID."/".$row->RID." redirecting ".$url.$append." => ".$newlocation.$append);
            }
        }
    }
}


?>