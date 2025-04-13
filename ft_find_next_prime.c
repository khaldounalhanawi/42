int ft_is_prime(int nb)
{
	int	i;

	if (nb == 2147483647)
		return (1);
	if (nb == 2)
		return(1);
	else if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return(1);
}

int ft_find_next_prime(int nb)
{
	int	i;

	if (nb == 2147483647)
		return (2147483647);
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		i = 1;
		while (nb + i <= 2147483647)
		{
			if (ft_is_prime(nb + i))
				return (nb + i);
			i++;
		}	
	}
	return (0);
}
/*
#include<stdio.h>
 int main()
{
	int a = ft_find_next_prime(2147483647);
	printf("%d\n",a);
	return 0;
}*/