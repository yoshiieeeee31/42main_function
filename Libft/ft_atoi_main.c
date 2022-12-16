#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*nptr;

	nptr = "\t       fa         \r+92\n2374-56r789hokkaido";
	printf("%s\n", nptr);
	printf("original \t: %d\n", atoi(nptr));
	printf("      ft \t: %d\n", ft_atoi(nptr));
	return (0);
}