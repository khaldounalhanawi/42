#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	sort(char *list)
{
	return;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	list[argc - 1];


	i = 1;
	j = 0;
	while (i < argc)
	{
		list[j] = *argv[i];
		i++;
		j++;
	}
	
	sort(&list);
	return (0);
}



/*
	while (i < argc)
	{
		write (1, argv[i], len(argv[i]));
		write (1, "\n", 1);
		i++;
	}
	*/
