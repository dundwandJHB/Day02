//Declares to that compiler what argument are required
#include <unistd.h>

int ft_putchar (char c)
{
  write (1, &c, 1);
  return(0);
}

//Function that checks if alpha is less than 'z' and repeats the process until the function is not true. It's a void because is returns nothing.
void ft_print_alphabet(void)
{
  //Declaring that alpha is a character.
  char alpha;

  //Declaring variables, that alpha is equal to the letter 'a'.
  alpha = 'a';
  while (alpha <= 'z') {
    ft_putchar(alpha);
    alpha++;
}
}

int main()
{
  ft_print_alphabet();
  //Initiates the a line break
  ft_putchar('\n');
  return(0);
}
