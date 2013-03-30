#include <iostream>
#include <cstdio>
#include "arr_utils.h"
int find_min (int arr[], int start, int end)
{
	int min = start;
	for (int i = start; i < end; i++)
	{
		if (arr[i] < arr[min])
			min = i;
	}
	return min;
}
void selection_sort (int arr[], int start, int end)
{
	for (int i = 0; i < end; i++)
	{
		int ptr = find_min (arr, i, end+1);
		exchange(arr, i, ptr);
	}
}
int main()
{
	int arr[9] = {9, 3, 2, 7, 6, 1, 4, 5, 8};
	selection_sort(arr, 0, 9);
	print_arr(arr, 9);
	return 0;
}