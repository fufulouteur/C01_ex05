#include <unistd.h>
void ft_putstr(char *str);

int	main(void)
{
  char str[] = "lol\0";
  ft_putstr(str);
  return (0);
}
