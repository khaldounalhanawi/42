int ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return(nb * ft_recursive_power(nb, power-1));
}
/*
#include<stdio.h>
int  main()
{
	int a = 3;
	int b = 4;

	int c = ft_recursive_power(a,b);
	printf("%d\n",c );
	return 0;
}*/