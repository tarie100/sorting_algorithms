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
 * shell_sort - sorts an array of integers in ascending order
 * @array: the array
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;
	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;
	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_int(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
