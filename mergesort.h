#include <iostream>
#include <cstdio>
void merge (int arr[], int aux[], int start, int end, int mid)
{
	for (int p = start; p <= end; p++)
	{
		aux[p] = arr[p];
	}
	int i = start;
	int j = mid+1;
	for (int k = start; k <= end; k++)
	{
		if (i > mid)
		{
			arr[k] = aux[j++];			
		}
		else if (j > end)
		{
			arr[k] = aux[i++];
		}
		else if (aux[j] < aux[i])
		{
			arr[k] = aux[j++];
		}
		else
		{
			arr[k] = aux[i++];
		}
	}
}
void sort (int arr[], int aux[], int start, int end)
{
	if (end <= start)
		return;
	int mid = start + (end - start)/2;
	sort(arr, aux, start, mid);
	sort(arr, aux, mid+1, end);
	merge(arr, aux, start, end, mid);
}
void merge_sort (int arr[], int size, int start, int end)
{
	int* aux = new int[size];
	sort(arr,aux, 0, 8);
}