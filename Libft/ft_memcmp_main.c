#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;
	s1 = "Hello,Python!";
	s2 = "Hello,Lisp!";
	n = -20;
	while (n < 30)
	{
		printf("number : %d\n", n);
		printf("original \t: %d\n", memcmp(s1, s2, n));
		printf("      ft \t: %d\n", ft_memcmp(s1, s2, n));
		n++;
	}
	return (0);
}

