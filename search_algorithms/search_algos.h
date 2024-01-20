#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void binary_printer(int *arr, size_t mid, size_t size);
#endif /* SEARCH_ALGOS_H */
