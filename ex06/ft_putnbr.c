#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}

void ft_putn(int *nb)
{
	*nb = '42';
}

int main ()
{
	ft_putnbr();
	ft_putchar();
	return(0);
}
