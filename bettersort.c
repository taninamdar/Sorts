#include <stdio.h>

int main()
{
	int n, *arr;

	scanf("%d", n);

	arr = (int*) malloc(sizeof())
}

// Size is defined such that 0, 1, ... size-1 are indices hmm, or not how can it go to -1 anyway hmm o.o
void sort(int* arr, int size)
{
	// Keep dividing till unit size
	if(size == 0)
		return;

	// [0, 1, 2, 3, 4] - > [0, 1], [2, 3, 4] -> [0], [1], [2], [3,4] -> ...
	sort(arr, size/2);
	sort(arr + size/2, size - size/2);

	merge(arr, size/2, arr+size/2, size - size/2);
}

void merge(int* src1, int size1, int* src2, int size2)
{
	// Make a new array for sorting
	int dest[size1 + size2] = {0};

	int i = 0, j = 0, k = 0;

	//hmm, is this okay [0], [1] -> <1 ./
	while(i < size1 && j < size2);
		dest[k++] = src1[i] < src2[j] ? src1[i++] : src2[j++];

	while(i < size1)
		dest[k++] = src1[i++];

	while(j < size2)
		dest[k++] = src2[j++];

	// Pour back in elements
	k = 0;

	for(i = 0; i < size1; i++)
		src1[i] = dest[k++];
	
	for(j = 0; j < size2; j++)
		src2[j] = dest[k++];

	// That's all, folks!
}