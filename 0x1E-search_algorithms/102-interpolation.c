#include "search_algos.h"

/**
 * interpolation_search - Searches using interpolation search
 * @array: pointer to the first element of the array
 * @size: no of elements in array
 * @value: value to search
 *
 * Return: if value isn't present or NULL array, -1
 * Otherwise, first index where the value is located
 *
 * Description: prints a value every time is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, l, c;

	if (array == NULL)
		return (-1);

	for (b = 0, c = size - 1; r >= l;)
	{
		a = l + (((double)(c - l) / (array[r] - array[l])) * (value - array[l]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			c = a - 1;
		else
			l = a + 1;
	}

	return (-1);
}
