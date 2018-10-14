<?php

/**
 * Implements hook_views_data_alter().
 */
function views_year_filter_views_data_alter(array &$data)
{

    $data['node__field_date_publication']['views_year_filter'] = array(
        'title' => t('Views year filter'),
        'filter' => array(
            'title' => t('Views year filter'),
            'help' => t('Create views year filter'),
            'field' => 'field_date_publication_value',
            'id' => 'views_year_filter',
            'group' => 'Custom',
        ),
    );

    return $data;
}