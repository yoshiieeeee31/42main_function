#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*str;

	s1 = "Hello,";
	s2 = "World!";
	str = ft_strjoin(s1, s2);
	printf("%s\n", str);
	printf("%s\n", ft_strjoin("\0", "\0"));
	printf("%s\n", ft_strjoin("aaaaaaaaaaaa", "\0"));
	printf("%s\n", ft_strjoin("\0", "aaaaaaaaa"));
	printf("%s\n", ft_strjoin("123456789", "abcdefg"));
	return (0);
}
