#include"sort.h"
/**
 * swap_int - swaps two int
 * @x: int 1
 * @y: int 2
 */
void swap_int(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
/**
 * selection_sort -  sorts an array of integers in ascending order
 * @array: the array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, min;
	
	for (a = 0; a < size-1; a++)
	{
		min = a;
		for (b = a+1; b < size; b++)
			if (array[b] < array[min])
				min = b;
		if(min != a)
			swap_int(&array[min], &array[a]);
	}
}
