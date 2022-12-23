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
	s = "42 Tokyo!October@2022#Piscine$ykusano_1997+06}18%Zidane^Twitter&Instagram*Facebook(Rugby)";
	c = 0;
	while (n < 128)
	{
		printf("\n%d, %c\n\n", n, c);
		printf("original : %s\n", s);
		str1 = memchr(s, c, n);
		str2 = memchr(s, c, n);
		printf("memchr    \t=  %s\n", str1);
		printf("ft_memchr \t=  %s\n", str2);
		n++;
		c++;
	}
	return (0);
}
