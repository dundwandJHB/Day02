#include <unistd.h>
void ft_putchar (char x)
{
  write(1, &x, 1);
}

void ft_print_comb(void)
{
  char x = '0';
  char y = '0';
  char z = '0';
  
  while (x <= '9')
    {
      while (y <= '9')
	{
	  while (z <= '9')
	    {
	      if (x < y && y < z)
		{
		  ft_putchar(x);
		  ft_putchar(y);
		  ft_putchar(z);
		  
		  ft_putchar(',');
		  ft_putchar(' ');
		}
	      z++;
	    }
	  z = '0';
	  y++;
	}
      y = '0';
      x++;
    }
}

int main()
{
  ft_print_comb();
  ft_putchar('\n');
  return(0);
}
