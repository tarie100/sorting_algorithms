#include"sort.h"
/**
 * swap_int - swaps
 * @x: para 1
 * @y: para 2
 */
void swap_int(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * partition - iterates over array
 * @array: the array
 * @l: 1
 * @r: 2
 * Return: iterated
 */
int partition(int *array, int l, int r)
{
	int pivot = array[r];
	int i = l, j;

	for (j = l; j < r; ++j)
	{
		if (array[j] < pivot)
		{
			swap_int(&array[i], &array[j]);
			++i;
		}
	}
	swap_int(&array[i], &array[r]);
	return (i);
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: the array
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	int pivot;

	if (size <= 1)
	{
		return;
	}
	pivot = partition(array, 0, size - 1);
	quick_sort(array, pivot);
	quick_sort(array + pivot + 1, size - pivot - 1);
}
