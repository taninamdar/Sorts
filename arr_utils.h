#include <iostream>
#include <cstdio>
#include <ctime>
void print_arr (int arr[], int size)
{
	for (int i = 0; i<size; i++)
	{
		printf("%d\n", arr[i]);
	}
}
void print_arr (int arr[], int start, int end)
{
	for (int i = start; i<=end; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
void exchange (int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
void shuffle (int arr[], int size)
{
	time_t timer;
	srand(time(&timer));
	for (int i = 0; i < size; i++)
	{
		int ptr = rand();
		exchange(arr, i, (ptr)%size);
	}
}
bool is_sorted (int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i+1 == size)
		{
			break;
		}
		if (arr[i] > arr[i+1])
		{
			return false;
		}
	}
	return true;
}