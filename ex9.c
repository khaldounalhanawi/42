void sort (int *ll, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (ll[j] > ll[j + 1])
			{
				temp = ll[j];
				ll[j] = ll[j + 1];
				ll[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main () 
{
	int i =0;
	int arr[]= {1,22,42,1,55};

	sort(arr,5);
	while (i < 5)
	{
		printf("%d,",arr[i]);
		i++;
	}
}*/