#include <unistd.h>

void	ft_putchar(char c);

void	first_row(int x)
{
	int	column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		column++;
	}
	ft_putchar('\n');
}

void	last_row(int x)
{
	int	column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			ft_putchar('C');
		else if (column == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		column++;
	}
}

void	middle_rows(int x)
{
	int	column;

	ft_putchar('B');
	column = 1;
	while (column < x - 1)
	{
		ft_putchar(' ');
		column++;
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	show_error(void)
{
	write(1, "error", 5);
}

void	rush(int x, int y)
{
	int	row;

	if (x <= 0 || y <= 0)
	{
		show_error();
	}
	row = 0;
	while (row < y)
	{
		if (row == 0)
			first_row(x);
		else if (row == y - 1)
			last_row(x);
		else
			middle_rows(x);
		row++;
	}
}


