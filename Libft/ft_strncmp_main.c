#include "libft.h"

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1;
	char	*s2;
	int		i;
	s1 = "Hello,World!";
	s2 = "Hello,Python!";
	i = -30;
	while (i < 30)
	{
		printf("%d\n", i);
		printf("strncmp \t: \t%d\n", strncmp(s1, s2, i));
		printf("ft_strncmp \t: \t%d\n", ft_strncmp(s1, s2, i));
		i++;
	}
	return (0);
}
