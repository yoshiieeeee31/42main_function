#include "libft.h"

#include <stdio.h>
#include <string.h>
int	main(void)
{
	int		n;
	char	*s;
	char	*str1;
	char	*str2;
	int		c;
	n = 0;
	s = "Hello,World!";
	c = 0;
	while (n < 128)
	{
		printf("\n%d, %c\n\n", n, c);
		str1 = memchr(s, c, n);
		str2 = memchr(s, c, n);
		printf("memchr    \t=  %s\n", str1);
		printf("ft_memchr \t=  %s\n", str2);
		n++;
		c++;
	}
	return (0);
}
