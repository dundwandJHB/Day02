#include <unistd.h>

void ft_putchar (char x)
{
	write(1, &x, 1);
}

void ft_putchar_comb2(void)
{
	char x = '0';
	char y = '0';

	while (x <= '9' )
	{
		while(y <= '9')
		{
		if (x < y)
		{
		ft_putchar(x);
		ft_putchar(y);

		ft_putchar(',');
		ft_putchar(' ');
		}
		y++;
		}
		y = '0';
		x++;
	}
}

int main()
{
	ft_putchar_comb2();
	ft_putchar('\n');
	return(0);
}
