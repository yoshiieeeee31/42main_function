#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	int		n;
	int		x;
	n = 0;
	x = 3;
	while (n < 50)
	{
		char	src1[] = "ABCDEGHIJKLMNOPQRSTU";
		char	src2[] = "ABCDEGHIJKLMNOPQRSTU";
		printf("size : %d\n", n);
		str1 = memmove(src1 + x, src1, n);
		str2 = ft_memmove(src2 + x, src2, n);
		printf("memmove    \t=  %s\n", str1);
		printf("ft_memmove \t=  %s\n", str2);
		printf("\n");
		n++;
	}
	return (0);
}

