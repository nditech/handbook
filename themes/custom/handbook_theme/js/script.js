(function($) {
    Drupal.behaviors.ndi = {
        attach: function(context, settings) {

		//Toggle off-canvas filters on mobile
		$('.close-nav, #mobile-menu-toggle, #page-wrapper-overlay').click(function(e) {
			e.preventDefault();
			$('#page-wrapper').toggleClass('active');
			$('.region-sidebar-first').toggleClass('active');
		});

 		var viewportWidth = $(window).width();
		$(window).resize(function() {
			viewportWidth = $(window).width();
		});
		$('.menu-depth-3 a, .menu-depth-2 a.active').click(function(e) {
			e.preventDefault();
			if (viewportWidth <= 750) {
				$('#page-wrapper').toggleClass('active');
                        	$('.region-sidebar-first').toggleClass('active');
			}
		});

		//Nav menu animations		
		$('.nolink').each(function() {
			$(this).click(function() {
				$(this).toggleClass('toggle');
			});
		});
		$('.nolink').each(function() {
			if ($(this).hasClass('active-trail')) {
				$(this).addClass('toggle');
			}
		});
		/*Back to top link on mobile*/
		$('.top').click(function(event) {    
    			event.preventDefault();
    			$(this).parent().removeClass('active'); 
    			$('html,body').animate({
        			scrollTop: $("#main-content").offset().top  + (-175)},
        			'slow');    
		});
		$(function() {
			jQuery(window).scroll(function() {
				var offset = 200;
    				var duration = 300;
        			if (jQuery(this).scrollTop() > offset) {
            				jQuery('#block-block-3').fadeIn(duration);
        			} else {
            				jQuery('#block-block-3').fadeOut(duration);
        			}
    			});

		});		
		/*Smooth Scroll*/
		$(function() {
  			$('a[href*=#]:not([href=#])').click(function() {
    				if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
      					var target = $(this.hash);
      					target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
      					if (target.length) {
        					$('html,body').animate({
          						scrollTop: target.offset().top -25
        				}, 800);
        				return false;
      				}
    			}
  		});
});


















		}
	}
})(jQuery);
