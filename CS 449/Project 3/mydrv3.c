#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

//include your code

#include "mymalloc.h"


//replace malloc here with the appropriate version of mymalloc
#define MALLOC(n) my_malloc(n)
void* my_malloc(int size);

//replace free here with the appropriate version of myfree
#define FREE(n) my_free(n)

void my_free(void *size);
//define DUMP_HEAP() to be the dump_heap() function that you write
#define DUMP_HEAP(n) dump_heap(n)


int main()
{
  int i;
  char *p[7];

  printf("=== Dump_heap() function works properly test ===\n");
  DUMP_HEAP();

  printf("=== Allocates single 32-byte block test ===\n");
  p[0]  = MALLOC(32);
  DUMP_HEAP();

  printf("=== Free single 32-byte block / Reduces size of heap appropriately test ===\n");
  FREE(p[0]);
  DUMP_HEAP();

  printf("=== Coalesce blocks correctly test ===\n");
  for(i=0; i < 7; i++) p[i] = MALLOC(32);
  FREE(p[1]);
  FREE(p[3]);
  DUMP_HEAP();
  FREE(p[2]);
  DUMP_HEAP();

  printf("=== Splits blocks correctly test ===\n");
  p[1] = MALLOC(32);
  DUMP_HEAP();

  printf("=== Finds best fitting block correctly test ===\n");
  FREE(p[5]);
  DUMP_HEAP();
  p[5] = MALLOC(32);
  DUMP_HEAP();

  return 0;
}

