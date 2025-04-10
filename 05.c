

#include <stdio.h>
#include <unistd.h>


///// add actions of atoi when things are not valid

int	sign_dtrmn(int val)
{
	if (val % 2 != 0)
		return (-1);
	else
		return (1);
}

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	find(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	number(char *str,char *base)
{
	int	i;
	int	val;
	int	max;

	max = 0;
	val = 0;
	i = 0;
	max = len(base) - 1;
	while (str[i] >= base[0] && str[i] <= base[max] && str[i] != '\0')
	{
		val = val * (len(base));
		val = val + find(str[i],base) ;
		i++;
	}
	return (val);
}

int	contains(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		sign;
	int		minus;
	int		max;
	char	txt_num[123455];

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	minus = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	sign = sign_dtrmn(minus);
	j = 0;
	max = len(base) -1; 
	while (contains(str[i],base))
	{
		txt_num[j] = str[i];
		j++;
		i++;
	}
	return (number(txt_num,base) * sign);
}

#include <stdio.h>
int main () 
{
	// Input :
	char k[] =" \t ---+--+01110124ZB0010AZ5b567";

	// Base options:
		//char base[] = "0123456789ABCDEF";
		  char base[] = "01";
		//char base[] = "0123456789";
	
	printf("this is final %d", ft_atoi_base(k,base));
	
} 