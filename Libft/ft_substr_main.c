#include "libft.h"
#include <stdio.h>
int	main(void)
{
	char			*s;
	char			*str;
	unsigned int	start;
	int				len;
	s = "012345678901234567890123456789";
	start = 0;
	while (start <= 30)
	{
		len = 0;
		while (len <= 30)
		{
			str = ft_substr(s, start, len);
			printf("len = %d start = %d : %s\n", len, start, str);
			free(str);
			len++;
		}
		start++;
	}
	return (0);
}
