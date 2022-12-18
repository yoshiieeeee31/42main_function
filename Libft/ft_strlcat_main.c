#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src;
	int		size;
	src = "*9876543210";
	size = -20;
	while (size < 30)
	{
		char	dest1[30] = "0123456789";
		char	dest2[30] = "0123456789";
		printf("%d\n", size);
		printf("strlcat \t: %lu %s\n", strlcat(dest1, src, size), dest1);
		printf("ft_strlcat \t: %zu %s\n", ft_strlcat(dest2, src, size), dest2);
		size++;
	}
	return (0);
}

