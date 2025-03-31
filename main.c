#include <stdio.h>

int	check_in(int x, int arr[])
{
	int	i;
	int	len;


	len = 0;
	while (arr[len] != 1987)
		len++ ;
	printf("len is %d\n",len);
	i=0;
	while(i<len){
		if (x == arr[i])
		{
			printf("Got one <<%d>>\n",arr[i] );
			return (1);
		}
		i++;
	}
	return (0);

}

int main(void)
{
	char pool[]= {'0','1','2','3','4'};
	char result[100][100];
	int	i=0;
	int j=0;
	int d=0;
	int size = sizeof(pool);
	int	test_pool[10000];
	int	limit;

	limit = 0;
	while (limit < 10000 )
	{
		test_pool[limit]=1987;
		limit++;	
	}

	while (i<size){
		while (j<size){
			while (d<size){
			    
			test_pool[i+j+d]=i+j+d;

			if (check_in(i+j+d,test_pool)==0)
			{
			char A = pool[i];
			char B = pool[j];
			char C = pool[d];

			if (A!=B && A!=C && B!=C) {
				char soko[]={A,B,C,',',' '};
				//printf("%s\n",soko );
				}
				d++;
			}
			}
			j++;
			d=0;
			}
		
		i++;
		j=0;
	}


	//printf("%s",result );








	return 0;
}