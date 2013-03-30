#include<iostream>
#include<cstdio>
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
