#include <unistd.h>

int ft_putchar (char c)
{
  write (1, &c, 1);
  return(0);
}

void ft_print_reverse_alphabet(void)
{
  char character; 
character = 'z';
  while (character >= 'a'){
    ft_putchar(character);
    character--;
}
}

int main()
{
  ft_print_reverse_alphabet();
  ft_putchar('\n');
  return(0);
}

