int ft_fibonacci(int index)
{
	int	c;
	int f;


	if (index < 0)
		return(-1);
	if (index == 0)
		return(0);
	if (index == 1)
		return(1);

	f = 0;
	c = -1;
	while (c < index-1)
	{
		c++;
		f = f + ft_fibonacci(c);
	}
	return(f);
}


#include<stdio.h>
 int main()
{
	

	int a = ft_fibonacci(6);
	printf("%d\n",a);
	return 0;
}