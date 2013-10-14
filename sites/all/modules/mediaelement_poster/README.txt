
ABOUT THIS MODULE
=================

Allows a Poster (thumbnail) to be set for the MediaElement Module

Thanks to TomiMikola for writing this code and posting to the MediaElement
issue queue.


CONFIGURATION
=============

Assuming the following fields on node:

 * field_video_url (type=link) (display format: MediaElement Video)
 * field_poster_file (type=file) (display format: hidden) OR field_poster_url
   (type=link) (display format: hidden)
Create an image style called 'video_poster' which can be used to scale the
image if necessary if using a file, otherwise if using a link, the poster image
will be scaled to fit based on width and height of the video.


FUTURE DEVELOPMENT
===========================

 * Allow the fields to be configured from an admin panel.

SUPPORT
=======

If you experience a problem with MediaElement Poster or have a problem, file a
request or issue on the MediaElement Poster queue at drupal.org/project/issues/
1681934. DO NOT POST IN THE FORUMS. Posting in the issue queues is a direct
line of communication with the module authors.

No guarantee is provided with this software, no matter how critical your
information, module authors are not responsible for damage caused by this
software or obligated in any way to correct problems you may experience.


SPONSORS
========

The MediaElement Poster module is sponsored by GoodWeb
( www.gw.ca ).

Licensed under the GPL 2.0.
www.gnu.org/licenses/gpl-2.0.txt

