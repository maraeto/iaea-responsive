(function(e){function t(t){lastObj!=0&&e(lastObj).css("outline","none").attr("thmr_curr",0);e(t).css("outline","#999 solid 3px").attr("thmr_curr",1);lastObj=t}function n(e){if(r(e))return!0;var n=o(e);if(n.length){t(n[0]);f(n)}return!1}function r(e){if(e.id=="themer-popup"||e.id=="themer-toggle")return!0;if(e.parentNode)while(e=e.parentNode)if(e.id=="themer-popup"||e.id=="themer-toggle")return!0;return!1}function s(e){if(!e)var e=window.event;if(e.target)var t=e.target;else if(e.srcElement)var t=e.srcElement;return n(t)}function o(t){var n=new Array;e(t).attr("data-thmr")!=undefined&&(n[n.length]=t);if(t&&t.parentNode)while((t=t.parentNode)&&t.nodeType!=9)e(t).attr("data-thmr")!=undefined&&(n[n.length]=t);return n}function u(e){if(e.style.display=="block")return!0;if(e.style.display=="inline"||e.style.display=="none")return!1;if(e.tagName!=undefined){var t=blocks.length;if(t>0)do if(blocks[t]===e.tagName)return!0;while(t--)}return!1}function a(){e("#themer-popup .devel-obj-output dt").each(function(){e(this).toggle(function(){e(this).parent().children("dd").show()},function(){e(this).parent().children("dd").hide()})})}function f(t){var r=t[0].getAttribute("data-thmr").split(" ").reverse()[0],s=Drupal.settings[r],o=Drupal.settings.thmrStrings,u=s.type,f=s.used;e("#themer-popup div.starter").empty();e("#themer-popup dd.key").empty().prepend('<a href="'+o.api_site+"api/search/"+o.drupal_version+"/"+s.search+'" title="'+o.drupal_api_docs+'">'+f+"</a>");e("#themer-popup dt.key-type").empty().prepend(u=="function"?o.function_called:o.template_called);var l="",l=o.parents+' <span class="parents">',c=!0;for(i=0;i<t.length;i++){thmr_ids=t[i].getAttribute("data-thmr").split(" ").reverse();for(j=i==0?1:0;j<thmr_ids.length;j++){var h=thmr_ids[j],p=Drupal.settings[h];l+=c?"":"&lt; ";l+='<span class="parent" trig="'+t[i].getAttribute("data-thmr")+'">'+p.name+"</span> ";c=!1}}l+="</span>";e("#themer-popup #parents").empty().prepend(l);e("#themer-popup span.parent").click(function(){var t=e(this).attr("trig"),r=e('[data-thmr = "'+t+'"]')[0];n(r)}).hover(function(){e("#"+e(this).attr("trig")).trigger("mouseover")},function(){e("#"+e(this).attr("trig")).trigger("mouseout")});if(s==undefined){e("#themer-popup dd.candidates").empty();e("#themer-popup dd.preprocessors").empty();e("#themer-popup div.attributes").empty();e("#themer-popup div.used").empty();e("#themer-popup div.duration").empty()}else{e("#themer-popup div.duration").empty().prepend('<span class="dt">'+o.duration+"</span>"+s.duration+" ms");if(s.candidates.length>0){e("#themer-popup dd.candidates").show().empty().prepend(s.candidates.join('<span class="delimiter"> < </span>'));u=="function"?e("#themer-popup dt.candidates-type").show().empty().prepend(o.candidate_functions):e("#themer-popup dt.candidates-type").show().empty().prepend(o.candidate_files)}else e("#themer-popup dt.candidates-type, #themer-popup dd.candidates").hide();if(s.preprocessors.length>0){e("#themer-popup dd.preprocessors").show().empty().prepend(s.preprocessors.join('<span class="delimiter"> + </span>'));e("#themer-popup dt.preprocessors-type").show().empty().prepend(o.preprocessors)}else e("#themer-popup dd.preprocessors, #themer-popup dt.preprocessors-type").hide();if(s.processors.length>0){e("#themer-popup dd.processors").show().empty().prepend(s.processors.join('<span class="delimiter"> + </span>'));e("#themer-popup dt.processors-type").show().empty().prepend(o.processors)}else e("#themer-popup dd.processors, #themer-popup dt.processors-type").hide();vars_div_array=e("div.themer-variables");vars_div=vars_div_array[0];var d=Drupal.settings.devel_themer_uri+"/"+s.variables;dummy_link=e('<a href="'+d+'" class="use-ajax">Loading Vars</a>');e(vars_div).append(dummy_link);Drupal.attachBehaviors(vars_div);dummy_link.click();a()}}e(document).ready(function(){lastObj=!1;strs=Drupal.settings.thmrStrings;e("body").addClass("thmr_call").attr("id","thmr_"+Drupal.settings.page_id);var t=0,n=function(){t=1-t;e("#themer-toggle :checkbox").attr("checked",t?"checked":"");e("#themer-popup").css("display",t?"block":"none");if(t){document.onclick=s;lastObj!=0&&e(lastObj).css("outline","3px solid #999");e("[data-thmr]").hover(function(){this.parentNode.nodeName!="BODY"&&e(this).attr("thmr_curr")!=1&&e(this).css("outline","red solid 1px")},function(){e(this).attr("thmr_curr")!=1&&e(this).css("outline","none")})}else{document.onclick=null;lastObj!=0&&e(lastObj).css("outline","none");e("[data-thmr]").unbind("mouseenter mouseleave")}};e(Drupal.settings.thmr_popup).appendTo(e("body"));e('<div id="themer-toggle"><input type="checkbox" />'+strs.themer_info+"</div>").appendTo(e("body")).click(n);e("#themer-popup").resizable();e("#themer-popup").draggable({opacity:.6,handle:e("#themer-popup .topper")}).prepend(strs.toggle_throbber);e("#themer-popup .topper .close").click(function(){n()})})})(jQuery);