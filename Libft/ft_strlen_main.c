#include "libft.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char	*s;

	s = "Hello World!\n";
	printf("original \t= %lu\n", strlen(s));
	printf("ft       \t= %zu\n", ft_strlen(s));
}
