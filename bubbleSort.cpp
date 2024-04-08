#include "bubbleSort.h"
#include <iostream>

using namespace std;

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort::Sort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < i - n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void bubbleSort::printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		cout << " arr = " << arr[i] << " and i = " << i << endl;
	}
}