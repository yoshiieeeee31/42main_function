#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int		c;
	char	*s;

	c = 0;
	s = "I was gratified to be able to answer promptly. I said I don’t know.";
	while (c <= 127)
	{
		printf("%d\n", c);
		printf("original \t: %c %s\n", c, strrchr(s, c));
		printf("ft       \t: %c %s\n", c, ft_strrchr(s, c));
		c++;
	}
	return (0);
}
