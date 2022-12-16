#include "libft.h"

#include <stdio.h>
int	main(void)
{
	char	*s;
	char	*c;
	char	*str;
	s = "\t42tokyo-piscine202210 \t42paris-piscine202010 \t42silicon valley-piscine201905";
	c = "piscine";
	printf("s = %zu\n", ft_strlen(s));
	printf("trim_len = %d\n", trim_len(s, c));
	str = ft_strtrim(s, c);
	printf("%s\n", s);
	printf("%s\n", str);
	return (0);
}
