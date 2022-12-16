#include "libft.h"
#include <stdio.h>
int	main(void)
{
	int		x;
	int		y;
	char	*s;
	char	*s2;
	x = -2147483648;
	s = ft_itoa(x);
	printf("%d\n", itoa_count(x));
	printf("ft_itoa : %s\n", s);
	x = 2147483647;
	s = ft_itoa(x);
	printf("%d\n", itoa_count(x));
	printf("ft_itoa : %s\n", s);
	y = -100;
	while (y < 214)
	{
		s2 = ft_itoa(y);
		printf("%s ", s2);
		free(s2);
		y++;
	}
	free(s);
	return (0);
}