#include "sort.h"

/**
 * partition - split array around pivot
 * @arr : the array to sort
 * @a: lower index
 * @b: higher index
 * @size : size of the array
 * Return: Always i
 */
int partition(int *arr, int a, int b, size_t size)
{
	int i, x, pivot, j;

	pivot = arr[b];
	i = a;
	for (j = a; j < b; j++)
	{
		if (arr[j] < pivot)
		{
			if (j > i)
			{
				x = arr[j];
				arr[j] = arr[i];
				arr[i] = x;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] > pivot)
	{
		x = arr[i];
		arr[i] = pivot;
		arr[b] = x;
		if (i != b)
			print_array(arr, size);
	}
	return (i);
}

/**
 * quicksort - sorts an arrayusing the Quick sort algorithm
 * @array: the array to sort
 * @a: lower index
 * @b: higher index
 * @size : size of the array
 * Return: Nothing
 */

void quicksort(int *array, int a, int b, size_t size)
{
	int piv;

	if (a < b)
	{
		piv = partition(array, a, b, size);
		quicksort(array, a, piv - 1, size);
		quicksort(array, piv + 1, b, size);
	}
}


/**
 * quick_sort - sorts an arrayusing the Quick sort algorithm
 * @array : the array to sort
 * @size : size of the array
 * Return: Nothing
 */


void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	quicksort(array, 0, size - 1, size);
}
