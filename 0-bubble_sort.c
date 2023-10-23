#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int swapped, temp;
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				for (k = 0; k < size; k++)
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}
