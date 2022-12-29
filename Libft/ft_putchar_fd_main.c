#include "libft.h"

int	main(void)
{
	int		i;

	i = -100;
	while (i <= 127)
	{
		ft_putchar_fd(i + '0', 1);
		i++;
	}
}
