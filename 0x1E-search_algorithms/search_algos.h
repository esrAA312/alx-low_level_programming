#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int midpoint(int staes, int enes);
int interpolation_search(int *array, size_t size, int value);
size_t calculate_position(int *ar, size_t l, size_t h, int v);
int exponential_search(int *array, size_t size, int value);
int mod_binary_search(int *array, int value, int begin, int end);

#endif
