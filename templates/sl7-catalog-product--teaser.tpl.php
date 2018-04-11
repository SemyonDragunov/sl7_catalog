<div class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <a class="wrapper" href="<?php print $node_url; ?>">
    <div class="img">
      <span><img src="<?php print image_style_url('sl7_catalog_product', $sl7_catalog_product_image[0]['uri']); ?>" /></span>
    </div>
    <div class="name">
      <span><?php print $node->title; ?></span>
    </div>
    <div class="price">
      <span><?php print $sl7_catalog_product_price['und'][0]['safe_value']; ?></span>
    </div>
  </a>
  <?php print render($title_suffix); ?>
</div>