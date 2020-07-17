//Declares to the compiler what arguments are required.
#include <unistd.h>

int ft_putchar (char c)
{
  write (1, &c, 1);
  return(0);
}

void ft_print_reverse_alphabet(void)
{
  //Declaring the char as a character.
  char character; 

  //Declaring that character is equal to the letter 'z'.
  character = 'z';
  while (character >= 'a')
    {
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

