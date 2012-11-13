<?php
/**
 * @file
 * hr_assessments_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function hr_assessments_data_uuid_default_entities() {
  $entities = array();
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/598ad6ea-df4a-4121-844b-68539cd6a2c2',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'All',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'All',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'All',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Tous',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Todos',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/all',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '598ad6ea-df4a-4121-844b-68539cd6a2c2',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/278a89a3-5d28-458d-93a7-a45d600c2df0',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Children under 5',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Children under 5',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Children under 5',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Enfants de moins de 5 ans',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Niños de menos de 5 años',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/children-under-5',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '278a89a3-5d28-458d-93a7-a45d600c2df0',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/fffd2a14-8dd0-4547-b2a0-5bae38360f23',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Conflict affected',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conflict affected',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conflict affected',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Affectés par le conflit',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Afectados por conflictos',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/conflict-affected',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'fffd2a14-8dd0-4547-b2a0-5bae38360f23',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/6109a0e8-5503-4701-b3b8-f0ef236d874a',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Elderly',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Elderly',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Elderly',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Personnes Agées',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Personas Mayores',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/elderly',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '6109a0e8-5503-4701-b3b8-f0ef236d874a',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d22e0432-d560-4059-a02b-f545a8234da2',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Host communities',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Host communities',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Host communities',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Communautés hôtes',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Comunidades anfitrionas',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/host-communities',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd22e0432-d560-4059-a02b-f545a8234da2',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/5b44eb6e-05ef-4ea7-b398-d0a45c8b2c15',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'IDPs',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'IDPs',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'IDPs',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Déplacés internes',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Personas Desplazadas Internas',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/idps',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '5b44eb6e-05ef-4ea7-b398-d0a45c8b2c15',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b46cc874-8919-4775-9a12-df12de9fe201',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Men',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Men',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Men',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Hommes',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Hombres',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/men',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b46cc874-8919-4775-9a12-df12de9fe201',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/da140ec5-24c9-4f0b-80d8-de9145becc2c',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Other',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Other',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Other',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Autres',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Otros',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/other',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'da140ec5-24c9-4f0b-80d8-de9145becc2c',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a9edf163-3ced-4f67-8949-297f46dd1d35',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Other affected population',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Other affected population',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Other affected population',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Autres populations affectées',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Otras poblaciones afectadas',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/other-affected-population',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'a9edf163-3ced-4f67-8949-297f46dd1d35',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/00d633d5-a669-400b-8c8a-96d0ea516c5f',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Refugees',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Refugees',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Refugees',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Réfugiés',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Refugiados',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/refugees',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '00d633d5-a669-400b-8c8a-96d0ea516c5f',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f3b21b15-3013-4fd3-94c4-ec1ebcc365fd',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Repatriated',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Repatriated',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Repatriated',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Rapatriés',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Repatriados',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/repatriated',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f3b21b15-3013-4fd3-94c4-ec1ebcc365fd',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d8303261-ea0a-4cc7-97ab-d92aeb6c1a8e',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Returnees',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Returnees',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Returnees',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Retournés',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Retornados',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/returnees',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd8303261-ea0a-4cc7-97ab-d92aeb6c1a8e',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );
  
  $entities['population_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d57fda7b-591a-48d1-8687-4b50e1ca88dd',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Women',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Women',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Women',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Femmes',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mujeres',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'population_types/women',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd57fda7b-591a-48d1-8687-4b50e1ca88dd',
    'vocabulary_machine_name' => 'population_types',
    'weight' => '0',
  );

  return $entities;
}
