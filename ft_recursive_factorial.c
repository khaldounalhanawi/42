int ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
return (nb * ft_recursive_factorial(nb-1));
}
/*
#include <stdio.h>
int	 main()
{
	
	int a = 5;
	int	b = ft_recursive_factorial(a);
	printf("%d\n",b );
	return 0;
}
*/