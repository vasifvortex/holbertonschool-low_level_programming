#include <stdio.h>
#include "search_algos.h"
#include <math.h>
/**
 * binary_search - bin search
 * @array: array
 * @size: size
 * @value: value
 *
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	int mid;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		mid = floor((start + end) / 2);
		binary_printer(array, start, end);
		if (array[mid] > value)
		{
			end  = mid - 1;
		}
		else if (value > array[mid])
		{
			start = mid + 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
	}
	return (-1);

}
/**
 * binary_printer - printer
 * @arr: array
 * @start: start
 * @end: end
 */
void binary_printer(int *arr, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", arr[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
