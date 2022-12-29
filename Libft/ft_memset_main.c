#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int		n;
	int		c;
	int		s;
	c = '@';
	s = 2;
	n = 0;
	while (n < 128)
	{
		char	s1[128] = "memset Hello,World!";
		char	s2[128] = "memset Hello,World!";
		printf("\n%d\n", n);
		memset(s1 + s, c, n);
		ft_memset(s2 + s, c, n);
		printf("original  \t=  %s\n\n", s1);
		printf("      ft  \t=  %s\n", s2);
		n++;
	}
	return (0);
}
