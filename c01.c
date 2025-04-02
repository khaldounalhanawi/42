void rev (int *ll, int size)
{
	int temp[size];
	int i = 0;
	int j = 0;

	while(i<size)
	{
		temp[i] = ll[i];
		i++;
	}
	i = size - 1;
	while (j<size)
	{
		ll[j] = temp [i];
		j++;
		i--;
	}
}
/*
#include <stdio.h>

int main () 
{
	int i =0;
	int arr[]= {1,2,3,4,5};

	rev(arr,5);
	while (i < 5)
	{
		printf("%d,",arr[i]);
		i++;
	}
}*/