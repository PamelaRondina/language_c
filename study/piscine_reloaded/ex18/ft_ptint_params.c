/*
Files to turn in : ft_print_params.c
Allowed functions : ft_putchar

• We’re dealing with a program here, you should therefore have a function main in your .c file.
• Create a program that displays its given arguments.

• Example :
$>./a.out test1 test2 test3
test1
test2
test3
$>
*/

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			n++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

/*
void	ft_putchar(char c);
 {
	write(1, &c, 1);
} 
*/