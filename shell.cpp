#include <iostream>
#include <cstdio>
#include "arr_utils.h"
void shell_sort (int arr[], int start, int end)
{
	int size = end-start;
	int jump = 1;
	while (jump < size)
	{
		jump = jump*3 + 1;
	}
	while (jump > 0)
	{
		for (int i = start; i < end; i++)
		{
			for (int j = i; j > start; j--)
			{
				if (j- jump < 0)
					break;
				if (arr[j] < arr[j-jump])
				{
					exchange(arr, j, j-jump);
				}
				else
				{
					break;
				}
			}
		}
		jump = jump/3;
	}
}

int main()
{
	int arr[13] = {11,9, 3, 12, 2, 7, 6, 10, 1, 4, 8, 5, 13};
	shell_sort(arr, 0, 13);
	print_arr(arr, 13);
	return 0;
}