#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int		main(void)
{
	int		i;

	i = 0;
	while (i <= 127)
	{
		if (isalnum(i))
			printf("original \t= \t%d : %c\n", i, i);
		else
			printf("%d : \tNO\n", i);
		if (ft_isalnum(i))
			printf("ft       \t= \t%d : %c\n", i, i);
		else
			printf("%d : \tNO\n", i);
		i++;
		putchar('\n');
	}
	return (0);
}