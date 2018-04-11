(function ($, Drupal, window, document, undefined) {

    var $window = $(window),
        mobileWidth = 767;

    function winWidth() {
        var winWidthVal = $window.width();
        return winWidthVal;
    }
    $window.resize(winWidth);

    // All same teaser name height.
    function sameTeaser() {
        var $teaser = $('.node-sl7-catalog-product.node-teaser'),
            $name = $teaser.find('.name'),
            nameHeight = 0;

        $name.each(function(i, e) {
            var eHeight = $(e).height();
            nameHeight = eHeight > nameHeight ? eHeight : nameHeight;
        });

        $name.height(nameHeight);
    }

    // Switch view mode.
    Drupal.ajax.prototype.commands.catalogMode = function(ajax, response, status) {
        $('#sl7-catalog-product').html(response.view);

        if (mobileWidth < winWidth()) {
            sameTeaser();
        }
    };

    // Load page.
    $(function() {
        if (mobileWidth < winWidth()) {
            sameTeaser();
        }
    });
})(jQuery, Drupal, this, this.document);