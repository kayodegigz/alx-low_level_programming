#ifndef _SEARCHALGOS_
#define _SEARCHALGOS_

#include <stdio.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int recursive_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
