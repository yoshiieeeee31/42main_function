#include "libft.h"

int	main(void)
{
	int		i;

	ft_putnbr_fd(-2147483648, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 2);
	write(1, "\n", 1);
	i = -100;
	while (i <= 200)
	{
		ft_putnbr_fd(i, 2);
		write(1, " ", 1);
		i++;
	}
	return (0);
}
