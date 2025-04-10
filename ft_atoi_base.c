

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
		val = val + (str[i] - base[0]);
		printf("\nval =%d\n",val);
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
	write (1,txt_num,25);
	
	
	/* has to be an int*/
	return (number(txt_num,base) * sign);
}

#include <stdio.h>
int main () 
{

	char k[] =" \t ----+--+1F4ZB0010AZ5b567";
	//ft_atoi(k);
	char base[] = "0123456789ABCDEF";
	
	printf("\n***this is final %d ****", ft_atoi_base(k,base));
	
	
	//char koko[] = "3"; 
	//int f = number(koko);
	//printf("%d",f);
	
	
	
} 


