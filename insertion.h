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
