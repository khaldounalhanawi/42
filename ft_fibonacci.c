int ft_fibonacci(int index)
{
	int f;

	if (index < 0)
		return(-1);
	if (index == 0)
		return(0);
	if (index == 1)
		return(1);

	f = 0;
	if (index > 1)
		f = f + ft_fibonacci(index-1)+ft_fibonacci(index-2);
	return(f);
}
/*
#include<stdio.h>
 int main()
{
	

	int a = ft_fibonacci(6);
	printf("%d\n",a);
	return 0;
}*/