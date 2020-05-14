#ifndef DB_ALLOC_H
#define DB_ALLOC_H

#include<stdint.h>

#include"schema.h"

// These functions exist just to check return
// status of malloc/strdup

int8_t *db_char_copy(int8_t *);
Schema *db_schema_alloc();
Attribute *db_attribute_alloc();
Attribute **db_attributep_alloc(uint16_t);

#endif