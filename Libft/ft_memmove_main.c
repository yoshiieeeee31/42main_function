#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	char	dest1[400] = "################################################################################################################################################################################################################################################################################################################################################";
	char	*src;
	int		n;
	n = 0;
	src = "If you get into serious programming, you will eventually have to learn C, the core language of Unix. C++ is very closely related to C; if you know one, learning the other will not be difficult. Neither language is a good one to try learning as your first, however. And, actually, the more you can avoid programming in C the more productive you will be.";
	while (n < 353)
	{
		printf("size : %d\n", n);
		str1 = memmove(dest1, src, n);
		str2 = ft_memmove(dest1, src, n);
		printf("memmove    \t=  %s\n", str1);
		printf("ft_memmove \t=  %s\n", str2);
		n++;
	}
	return (0);
}

