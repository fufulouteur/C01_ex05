#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int position;
	
	position = 0;
	while(str[position] != '\0')
	{
		ft_putchar(str[position]);
		position++;
	}
}
