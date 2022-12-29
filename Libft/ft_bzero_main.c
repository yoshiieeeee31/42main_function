#include "libft.h"
#include <stdio.h>
#include <strings.h>

int		main(void)
{
	int		n;

	n = 0;
	while (n < 30)
	{
		char	s1[30] = "Hello,42 Tokyo!";
		char	s2[30] = "Hello,42 Tokyo!";
		printf("%d\n", n);
		bzero(s1, n);
		printf("original \t= %s\n", s1);
		ft_bzero(s2, n);
		printf("ft       \t= %s\n", s2);
		n++;
	}
	return (0);
}
