//#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		n;
	char	*src;

	src = " + 0123456789";
	n = -20;
	while (n <= 100)
	{
		char	dest1[] = "What gets us into trouble is not what we don't know. It's what we know for sure that just ain't so.";
		//char	dest2[] = "What gets us into trouble is not what we don't know. It's what we know for sure that just ain't so.";
		printf("%d\n", n);
		printf("original \t: %lu  %s\n", strlcat(dest1, src, n), dest1);
		printf("\n");
		n++;
	}
	return (0);
}
