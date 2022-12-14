#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	char	*str2;
	char	*big;
	char	*mini;
	int		size;
	big = "42tokyopiscine";
	mini = "i";
	size = -20;
	while (size < 30)
	{
		str = strnstr(big, mini, size);
		str2 = ft_strnstr(big, mini, size);
		printf("%d\n", size);
		printf("strnstr \t: \t%s\n", str);
		printf("ft_strnstr \t: \t%s\n", str2);
		size++;
	}
	return (0);
}
