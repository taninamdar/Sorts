#include <iostream>
#include <cstdio>
#include "arr_utils.h"
void insertion_sort (int arr[], int start, int end)
{
	for (int i = start; i < end; i++)
	{
		for (int j = i; j > start; j--)
		{
			if (arr[j] < arr[j-1])
			{
				exchange(arr, j, j-1);
			}
			else
			{
				break;
			}
		}
	}
}

int main()
{
	int arr[9] = {9, 3, 2, 7, 6, 1, 4, 8, 5};
	insertion_sort(arr, 0, 9);
	print_arr(arr, 9);
	return 0;
}