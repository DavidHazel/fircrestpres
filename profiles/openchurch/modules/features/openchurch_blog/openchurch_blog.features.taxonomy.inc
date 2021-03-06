<?php
/**
 * @file
 * openchurch_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openchurch_blog_taxonomy_default_vocabularies() {
  return array(
    'openchurch_blog_topic' => array(
      'name' => 'Blog Topic',
      'machine_name' => 'openchurch_blog_topic',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'openchurch_blog',
      'weight' => '0',
      'metatags' => array(),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
