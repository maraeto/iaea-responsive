# news stories
UPDATE node, field_revision_field_newsstory_date SET node.created = UNIX_TIMESTAMP(field_newsstory_date_value) WHERE field_newsstory_date_value!='' AND nid = entity_id AND vid = revision_id;
UPDATE node SET node.created = UNIX_TIMESTAMP('1990-01-01 00:00:00') WHERE type = 'news_story' AND nid NOT IN (SELECT DISTINCT entity_id FROM field_revision_field_newsstory_date);

# media advisories
UPDATE node, field_revision_field_mediaadvisory_date SET node.created = UNIX_TIMESTAMP(field_mediaadvisory_date_value) WHERE field_mediaadvisory_date_value!='' AND nid = entity_id AND vid = revision_id;
UPDATE node SET node.created = UNIX_TIMESTAMP('1990-01-01 00:00:00') WHERE type = 'media_advisory' AND nid NOT IN (SELECT DISTINCT entity_id FROM field_revision_field_mediaadvisory_date);

# pressreleases
UPDATE node, field_revision_field_pressrelease_date SET node.created = UNIX_TIMESTAMP(field_pressrelease_date_value) WHERE field_pressrelease_date_value!='' AND nid = entity_id AND vid = revision_id;
UPDATE node SET node.created = UNIX_TIMESTAMP('1990-01-01 00:00:00') WHERE type = 'press_release' AND nid NOT IN (SELECT DISTINCT entity_id FROM field_revision_field_pressrelease_date);

# dgstatement
UPDATE node, field_revision_field_dgstatement_date SET node.created = UNIX_TIMESTAMP(field_dgstatement_date_value) WHERE field_dgstatement_date_value!='' AND nid = entity_id AND vid = revision_id;
UPDATE node SET node.created = UNIX_TIMESTAMP('1990-01-01 00:00:00') WHERE type = 'dg_statement' AND nid NOT IN (SELECT DISTINCT entity_id FROM field_revision_field_dgstatement_date);

# photoessay
UPDATE node, field_revision_field_photoessay_date SET node.created = UNIX_TIMESTAMP(field_photoessay_date_value) WHERE field_photoessay_date_value!='' AND nid = entity_id AND vid = revision_id;
UPDATE node SET node.created = UNIX_TIMESTAMP('1990-01-01 00:00:00') WHERE type = 'photo_essay' AND nid NOT IN (SELECT DISTINCT entity_id FROM field_revision_field_photoessay_date);

# make sure no node has been changed befor it has been created
UPDATE node SET changed = created WHERE changed < created;