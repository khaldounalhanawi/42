int ft_iterative_power(int nb, int power)
{
	int	c;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	c = nb;
	while (power > 1)
	{
		power--;
		c = c * nb;
	}
	return (c);
}
/*
#include<stdio.h>
int  main()
{
	int a = 3;
	int b = 3;

	int c = ft_iterative_power(a,b);
	printf("%d\n",c );
	return 0;
}*/