#include "sort.h"
/**
 * bubble_sort - Function that sorts an array of integers in ascending order
 * @array: list of numbers be sorted
 * @size: array´s lenght
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	int bubble;
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = bubble;
				print_array(array, size);
			}
		}
	}
}
