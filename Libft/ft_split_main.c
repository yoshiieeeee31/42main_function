#include "libft.h"
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*str;
	char	c;
	char	**strs;
	int		i;
	argc = 3;
	str = argv[1];
	c = argv[2][0];
	strs = ft_split(str, c);
	i = 0;
	printf("argc = %d\n", argc);
	while (strs[i])
	{
		printf("%d:%s\n", i, strs[i]);
		i++;
	}
	free(strs);
	return (0);
}
