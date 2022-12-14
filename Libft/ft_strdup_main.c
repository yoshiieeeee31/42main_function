#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src;
	char	*s1;
	char	*s2;
	src = "What gets us into trouble is not what we don’t know. It’s what we know for sure that just ain’t so.";
	s1 = strdup(src);
	s2 = ft_strdup(src);
	printf("strdup    \t%s\n", s1);
	printf("ft_strdup \t%s\n", s2);
}
