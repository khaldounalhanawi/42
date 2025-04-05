#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	*row(int a, int b)
{
	//int	nr_default[4];
	int	*result;
	
	result = malloc (4 * sizeof(int));
	if (a == 4 && b == 1)
	{
		result[0] = 1;
		result[1] = 2;
		result[2] = 3;
		result[3] = 4;
	}
	else if (a == 1 && b == 4)
	{
		result[0] = 4;
		result[1] = 3;
		result[2] = 2;
		result[3] = 1;	
	}
		
	return (result);
}


int	main(void)
{
	int	input[] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};
	int	*arr;
	
	int	top_arr[4];
	int	bottom_arr[4];
	int	left_arr[4];
	int	right_arr[4];
	int	x;
	int	y;
	int	size;
	int	i;
	//int	j;
	i = 0;
	while (i < 4)
	{
		top_arr[i] = input [i];
		bottom_arr[i] = input [i+4];
		left_arr[i] = input [i + 8];
		right_arr[i] = input [i + 12];
		i++;
	}
	
	
	size = 4;
	x = 0;
	while (x < size)
	{
		//printf("%d/",top_arr[x]);
		y = 0;
		while (y < size)
		{
			printf("%d/%d/%d/%d ",top_arr[y],bottom_arr[y],left_arr[x],right_arr[x]);
			y++;
		}
		printf("\n");
		x++;
	}
	

	arr = malloc (4 * sizeof(int));
	arr = row (1,4);
	//printf("%d,%d,%d,%d",arr[0],arr[1],arr[2],arr[3]);

}
