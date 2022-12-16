#include "libft.h"

#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	int		i;
	str1 = "AaBbC442342423cDdEeFfGg";
	str2 = "AaBbC442342423cDdEeFfGg";
	printf("%s\n", str1);
	i = 0;
	while (str1[i])
	{
		printf("%c = ",tolower(str1[i]));
		printf("%c\n", ft_tolower(str2[i]));
		i++;
	}
	return (0);
}
