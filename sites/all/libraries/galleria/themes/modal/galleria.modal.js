/**
 * @preserve Galleria Modal Theme 2012-01-24
 * http://www.iaea.org
 *
 * Copyright (c) 2011, Kresimir Nikolic/IAEA
 */

(function($) {

/*global jQuery, Galleria */

Galleria.addTheme({
    name: 'modal',
    author: 'Kresimir Nikolic, IAEA',
    css: 'galleria.modal.css',
    version: 1,
    defaults: {
        // add your own default options here
        transition: 'slide',
        imagecrop: true,
        initialTransition: 'fade',

        // theme specific defaults:
        _locale: {
            play: 'Play slideshow',
            pause: 'Pause slideshow',
            enter_fullscreen: 'Enter fullscreen',
            exit_fullscreen: 'Exit fullscreen'
        },
        _showFullscreen: true,
        _showProgress: true
    },
    init: function (options) {
        this.addElement('bar', 'fullscreen', 'play', 'popout', 'progress', 'info-link');
        this.prependChild('info');
        this.append({
            'stage': ['progress'],
            'container': ['info'],
            'info': ['play']
        });

        /* add counter at the beginning of the caption */
        this.prependChild('info-text', 'counter'); /* add sharing options */
        $('.galleria-info').prepend($('.addthis_toolbox').css('position', 'absolute').css('display', 'block')); /* add date and h2 into galleria DOM */
        $('.galleria-info').prepend($('#galleria-date').css('display', 'block'));
        $('.galleria-info').prepend($('h2').css('display', 'block'));

        var gallery = this,
            play_link = this.$('play'),
            progress = this.$('progress'),
            PLAYING = !! options.autoplay,
            touch = Galleria.TOUCH,
            transition = options.transition,
            lang = options._locale;

        /* remove prev/next gui when idle */
        if (!Galleria.TOUCH) {
            this.addIdleState(this.get('image-nav-left'), {
                left: -60
            });
            this.addIdleState(this.get('image-nav-right'), {
                right: -60
            });
        }

        /* play / pause */
        this.bind('play', function () {
            PLAYING = true;
            play_link.addClass('playing');
        });
        this.bind('pause', function () {
            PLAYING = false;
            play_link.removeClass('playing');
            progress.width(0);
        });
        play_link.click(function () {
            gallery.defineTooltip('play', PLAYING ? lang.play : lang.pause);
            if (PLAYING) {
                gallery.pause();
            } else {
                gallery.play();
            }
        });

        /* progress */
        if (options._showProgress) {
            this.bind('progress', function (e) {
                progress.width(e.percent / 100 * this.getStageWidth());
            });
        }
        this.bind('loadstart', function (e) {
            if (!e.cached) {
                this.$('loader').show();
            }
        });
        this.bind('loadfinish', function (e) {
            progress.width(0);
            this.$('loader').hide();
            this.refreshTooltip('counter', 'caption');
        });

        /* thumbs */
        // bind some stuff
        this.bind('thumbnail', function (e) {

            if (!touch) {
                // fade thumbnails
                $(e.thumbTarget).css('opacity', 0.6).parent().hover(function () {
                    $(this).not('.active').children().stop().fadeTo(100, 1);
                }, function () {
                    $(this).not('.active').children().stop().fadeTo(400, 0.6);
                });

                if (e.index === this.getIndex()) {
                    $(e.thumbTarget).css('opacity', 1);
                }
            } else {
                $(e.thumbTarget).css('opacity', this.getIndex() ? 1 : 0.6);
            }
        });
        this.bind('loadstart', function (e) {
            if (!e.cached) {
                this.$('loader').show().fadeTo(200, 0.9);
            }
            this.$('info').toggle(this.hasInfo());
            $(e.thumbTarget).css('opacity', 1).parent().siblings().children().css('opacity', 0.6);
        });
        this.bind('loadfinish', function (e) {
            this.$('loader').fadeOut(200);
        });

    }
});
}(jQuery));