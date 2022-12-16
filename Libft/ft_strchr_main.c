#include "libft.h"
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*str1;
	char	*str2;
	char	*c;
	int		i;
	s1 = "42tokyo  piscine";
	c = "\0";
	i = 0;
	while (c[i])
	{
		str1 = strchr(s1, c[i]);
		str2 = ft_strchr(s1, c[i]);
		printf("strchr = \t%s\n", str1);
		printf("ft_strchr = \t%s\n\n", str2);
		i++;
	}
	return (0);
}
