#include <stdio.h>
#include <stdlib.h>

#include "ArrayList.h"

/** Seçerek Sıralama **/
int* Array::SelectionShort(int array[], int length)
{
	/**
		Usage:
		int array[] = {5,7,2,9,6,1,3,8,4};
		int length = (sizeof(array) / sizeof(int));
		int* ar = Array::SelectionShort(array, length);
		for(int k = 0; k < length; k++)
			cout << ar[k] << endl;
	**/
	
	int tmp, min;
	
	for(int i = 0; i < length; i++)
	{
		min = i;
		for(int j = i; j < length; j++)
			if(array[j] < array[min])
				min = j;
		
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
	}
	
	return array;
}

/** Radix Sort Sıralaması (Taban Sıralaması) **/
/**

Usage:
	int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
	int n = sizeof(arr) / sizeof(arr[0]);
	radixsort(arr, n);
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);

**/
int Array::getMax(int arr[], int n)
{
	int mx = arr[0];
	for(int i = 1; i < n; i++)
		if(arr[i] > mx)
			mx = arr[i];
	return mx;
}
 
void Array::countSort(int arr[], int n, int exp)
{
	int output[n]; // output array
	int i, count[10] = {0};
 
	for (i = 0; i < n; i++)
		count[ (arr[i]/exp)%10 ]++;
 
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	
	for (i = n - 1; i >= 0; i--)
	{
		output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
		count[ (arr[i]/exp)%10 ]--;
		printf("%d-->%d, ",i,(arr[i]/exp)%10);
	}
	
	printf("\n");
	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

void Array::radixsort(int arr[], int n)
{
	int m = Array::getMax(arr, n);
	for(int exp = 1; m / exp > 0; exp *= 10)
		Array::countSort(arr, n, exp);
}