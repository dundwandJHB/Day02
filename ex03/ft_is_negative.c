#include <unistd.h>

int ft_putchar (char c)
{
  write(1, &c, 1);
  return(0);
}

void ft_is_negative (int n)
{
  //If-else loop that checks if 'n' is less than 0, the display 'N' if true and 'P' if not. 
  if (n < 0)
    {
      ft_putchar('N');
    }

  else if (n > 0)
    {
      ft_putchar('P');
    }
}

int main()
{
  ft_is_negative(-5);
  //Removes the % after displaying the character.
  ft_putchar('\n');
  return(0);
}
