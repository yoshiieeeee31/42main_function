#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		n;
	char	*src;

	src = "src : You're my wonderwall";
	n = -20;
	while (n <= 100)
	{
		char	dest1[] = "dest : What I Talk About When I Talk About Running";
		char	dest2[] = "dest : What I Talk About When I Talk About Running";
		printf("%d\n", n);
		printf("original \t: %lu %s\n", strlcpy (dest1, src, n), dest1);
		printf("ft       \t: %zu %s\n", ft_strlcpy (dest2, src, n), dest2);
		printf("\n");
		n++;
	}
	return (0);
}
