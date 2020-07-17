#include <unistd.h>

int ft_putchar (char c)
{
  write(1, &c, 1);
  return(0); 
}

void ft_print_numbers(void)
{
  int num;
  num = '0';
  while (num <= '9')
    {
      ft_putchar(num);
      num++;
    }
}

int main()
{
  ft_print_numbers();
  ft_putchar('\n');
  return (0);
}
