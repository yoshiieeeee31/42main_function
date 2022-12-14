#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src;
	char	*str1;
	char	*str2;
	int		n;

	n = 0;
	src = "What gets us into trouble is not what we don't know. It's what we know for sure that just ain't so.";
	while (n < 128)
	{
		char	dest1[128] = "01234567890123456789";
		char	dest2[128] = "01234567890123456789";
		str1 = memcpy(dest1, src, n);
		str2 = ft_memcpy(dest2, src, n);
		printf("%d\n", n);
		printf("original     \t=  %s\n", str1);
		printf("ft         \t=  %s\n", str2);
		n++;
	}
	return (0);
}