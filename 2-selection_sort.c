#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: Array to sort
 * @size: Size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (i != k)
		{
			swap = array[i];
			array[i] = array[k];
			array[k] = swap;
			print_array(array, size);
		}
	}
}