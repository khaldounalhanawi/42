int ft_sqrt(int nb)
{
	int	i;

	if (nb == 9 || nb == 1)
		return (nb);
	i = 1;
	while (i < nb)
	{
		if (i * i > nb)
			return (0);
		else if (i * i == nb)
			return (i);
		i++;
	}	
	return (0);
}
/*

#include<stdio.h>
 int main()
{
	

	int a = ft_sqrt(1);
	printf("%d\n",a);
	return 0;
}*/