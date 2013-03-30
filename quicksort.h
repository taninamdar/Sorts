#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "arr_utils.h"
int partition (int arr[], int start, int end)
{
	int i = start;
	int j = end+1;
	while (true)
	{
		while (arr[++i] < arr[start])
		{
			if (i == end)
			{
				break;
			}
		}
		while (arr[--j] > arr[start])
		{
			if (j == start)
			{
				break;
			}
		}
		if (i >= j)
		{
			break;
		}
		exchange(arr, i, j);
	}
	exchange (arr, j, start);
	return j;
}
void sort (int arr[], int start, int end)
{
	if (start >= end)
	{
		return;
	}
	int ptr = partition(arr, start, end);
	sort (arr, start, ptr-1);
	sort (arr, ptr+1, end);
}
void quick_sort(int arr[], int size)
{
	shuffle (arr, size);
	if (is_sorted (arr, size))
	{
		return;
	}
	sort (arr, 0, size-1);
}
 
