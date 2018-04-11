<?php

/**
 * View: sl7_catalog_category.
 */

$view = new view();
$view->name = 'sl7_catalog_category';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Каталог - категории';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Каталог';
$handler->display->display_options['css_class'] = 'sl7-catalog-category';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'ещё';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '518400';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '518400';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Поле: Термин таксономии: ID термина */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Поле: Термин таксономии: Изображение */
$handler->display->display_options['fields']['sl7_catalog_category_image']['id'] = 'sl7_catalog_category_image';
$handler->display->display_options['fields']['sl7_catalog_category_image']['table'] = 'field_data_sl7_catalog_category_image';
$handler->display->display_options['fields']['sl7_catalog_category_image']['field'] = 'sl7_catalog_category_image';
$handler->display->display_options['fields']['sl7_catalog_category_image']['label'] = '';
$handler->display->display_options['fields']['sl7_catalog_category_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['sl7_catalog_category_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sl7_catalog_category_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['sl7_catalog_category_image']['settings'] = array(
  'image_style' => 'sl7_catalog_category',
  'image_link' => '',
);
$handler->display->display_options['fields']['sl7_catalog_category_image']['delta_limit'] = '1';
$handler->display->display_options['fields']['sl7_catalog_category_image']['delta_offset'] = '0';
/* Поле: Термин таксономии: Имя */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Поле: Вывод */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'Вывод';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="img">
  <span>[sl7_catalog_category_image]</span>
</div>
<div class="name">
  <span>[name]</span>
</div>';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'taxonomy/term/[tid]';
$handler->display->display_options['fields']['nothing']['alter']['alt'] = '[name]';
$handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'item';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
/* Критерий сортировки: Термин таксономии: Вес */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Контекстный фильтр: Термин таксономии: ID термина */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['relationship'] = 'parent';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['exception']['title'] = 'Все';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['validate']['fail'] = 'access denied';
/* Критерий фильтра: Словарь таксономии: Машинное имя */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'sl7_catalog_category' => 'sl7_catalog_category',
);

/* Display: Все категории */
$handler = $view->new_display('page', 'Все категории', 'main_page');
$handler->display->display_options['defaults']['empty'] = FALSE;
/* Поведение при отсутствии результатов: Глобальный: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Каталог пуст';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<p>Каталог пуст. <a href="/admin/structure/taxonomy/sl7_catalog_category">Создайте структуру каталога.</a></p>';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Контекстный фильтр: Термин таксономии: Родительский термин */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'default';
$handler->display->display_options['arguments']['parent']['exception']['title'] = 'Все';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['default_argument_options']['argument'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['path'] = 'catalog';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Каталог';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Дочерние категории */
$handler = $view->new_display('block', 'Дочерние категории', 'child_block');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Связь: Термин таксономии: Родительский термин */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';