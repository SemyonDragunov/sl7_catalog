<?php

/**
 * @file
 * View: sl7_catalog_product.
 */

$view = new view();
$view->name = 'sl7_catalog_product';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Каталог - товары';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Каталог';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'ещё';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'views_content_cache';
$handler->display->display_options['cache']['results_min_lifespan'] = '-1';
$handler->display->display_options['cache']['results_max_lifespan'] = '21600';
$handler->display->display_options['cache']['output_min_lifespan'] = '-1';
$handler->display->display_options['cache']['output_max_lifespan'] = '21600';
$handler->display->display_options['cache']['keys'] = array(
  'comment' => array(
    'changed' => 0,
  ),
  'node' => array(
    'sl7_catalog_product' => 'sl7_catalog_product',
    'page' => 0,
    'distribution' => 0,
    'sl7_news' => 0,
    'service' => 0,
    'app' => 0,
    'sl7_billing_site' => 0,
    'hosting' => 0,
  ),
  'node_only' => array(
    'node_changed' => 0,
  ),
);
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '24';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
$handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
$handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
$handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Поле: Содержимое: Заголовок */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Поле: Содержимое: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['max_length'] = '40';
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '50',
);
/* Поле: Содержимое: Изображение */
$handler->display->display_options['fields']['sl7_catalog_product_image']['id'] = 'sl7_catalog_product_image';
$handler->display->display_options['fields']['sl7_catalog_product_image']['table'] = 'field_data_sl7_catalog_product_image';
$handler->display->display_options['fields']['sl7_catalog_product_image']['field'] = 'sl7_catalog_product_image';
$handler->display->display_options['fields']['sl7_catalog_product_image']['label'] = '';
$handler->display->display_options['fields']['sl7_catalog_product_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['sl7_catalog_product_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sl7_catalog_product_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['sl7_catalog_product_image']['settings'] = array(
  'image_style' => 'sl7_catalog_category',
  'image_link' => '',
);
$handler->display->display_options['fields']['sl7_catalog_product_image']['delta_limit'] = '1';
$handler->display->display_options['fields']['sl7_catalog_product_image']['delta_offset'] = '0';
/* Поле: Содержимое: Стоимость товара */
$handler->display->display_options['fields']['sl7_catalog_product_price']['id'] = 'sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['table'] = 'field_data_sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['field'] = 'sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['label'] = '';
$handler->display->display_options['fields']['sl7_catalog_product_price']['exclude'] = TRUE;
$handler->display->display_options['fields']['sl7_catalog_product_price']['element_label_colon'] = FALSE;
/* Критерий сортировки: Содержимое: Дата публикации */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Контекстный фильтр: Содержимое: Имеет идентификатор термина таксономии (с глубиной) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Все';
$handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
  'sl7_catalog_category' => 'sl7_catalog_category',
);
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
$handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = TRUE;
/* Критерий фильтра: Содержимое: Опубликовано */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Критерий фильтра: Содержимое: Тип */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'sl7_catalog_product' => 'sl7_catalog_product',
);

/* Display: Товары - анонс */
$handler = $view->new_display('page', 'Товары - анонс', 'teaser_page_mode');
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* Поведение при отсутствии результатов: Глобальный: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'В данной категории нет товаров.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['path'] = '-';

/* Display: Товары - таблица */
$handler = $view->new_display('page', 'Товары - таблица', 'table_page_mode');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '24';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 24, 40, 60';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
$handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
$handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
$handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'sl7_catalog_product_price' => 'sl7_catalog_product_price',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'sl7_catalog_product_price' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Поле: Содержимое: Заголовок */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Поле: Содержимое: Стоимость товара */
$handler->display->display_options['fields']['sl7_catalog_product_price']['id'] = 'sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['table'] = 'field_data_sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['field'] = 'sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['label'] = '';
$handler->display->display_options['fields']['sl7_catalog_product_price']['element_label_colon'] = FALSE;
$handler->display->display_options['path'] = '-';

/* Display: Товары - export */
$handler = $view->new_display('views_data_export', 'Товары - export', 'page_export');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_xls';
$handler->display->display_options['style_options']['provide_file'] = 1;
$handler->display->display_options['style_options']['filename'] = '%1-title.xls';
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Поле: Содержимое: Заголовок */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Название';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Поле: Содержимое: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = 'Описание';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '40';
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '50',
);
/* Поле: Содержимое: Стоимость товара */
$handler->display->display_options['fields']['sl7_catalog_product_price']['id'] = 'sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['table'] = 'field_data_sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['field'] = 'sl7_catalog_product_price';
$handler->display->display_options['fields']['sl7_catalog_product_price']['label'] = 'Цена';
$handler->display->display_options['fields']['sl7_catalog_product_price']['element_label_colon'] = FALSE;
$handler->display->display_options['path'] = 'catalog/export';
$handler->display->display_options['displays'] = array(
  'default' => 0,
  'teaser_page_mode' => 0,
  'table_page_mode' => 0,
);

/* Display: Главная страница */
$handler = $view->new_display('page', 'Главная страница', 'front_page');
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Критерий фильтра: Содержимое: Опубликовано */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Критерий фильтра: Содержимое: Тип */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'sl7_catalog_product' => 'sl7_catalog_product',
);
/* Критерий фильтра: Содержимое: Специальный вывод (sl7_catalog_extra_output) */
$handler->display->display_options['filters']['sl7_catalog_extra_output_tid']['id'] = 'sl7_catalog_extra_output_tid';
$handler->display->display_options['filters']['sl7_catalog_extra_output_tid']['table'] = 'field_data_sl7_catalog_extra_output';
$handler->display->display_options['filters']['sl7_catalog_extra_output_tid']['field'] = 'sl7_catalog_extra_output_tid';
$handler->display->display_options['filters']['sl7_catalog_extra_output_tid']['value'] = array(
  330 => '330',
);
$handler->display->display_options['filters']['sl7_catalog_extra_output_tid']['reduce_duplicates'] = TRUE;
$handler->display->display_options['filters']['sl7_catalog_extra_output_tid']['type'] = 'select';
$handler->display->display_options['filters']['sl7_catalog_extra_output_tid']['vocabulary'] = 'sl7_catalog_extra_output';
$handler->display->display_options['filters']['sl7_catalog_extra_output_tid']['hierarchy'] = 1;
$handler->display->display_options['path'] = '-';
$translatables['sl7_catalog_product'] = array(
  t('Master'),
  t('Каталог'),
  t('ещё'),
  t('Применить'),
  t('Сбросить'),
  t('Сортировать по'),
  t('По возрастанию'),
  t('По убыванию'),
  t('Элементов на страницу'),
  t('- Все -'),
  t('Пропустить'),
  t('« первая'),
  t('‹ предыдущая'),
  t('следующая ›'),
  t('последняя »'),
  t('Все'),
  t('%1'),
  t('Товары - анонс'),
  t('В данной категории нет товаров.'),
  t('Товары - таблица'),
  t('Товары - export'),
  t('Название'),
  t('Описание'),
  t('Цена'),
  t('Главная страница'),
);