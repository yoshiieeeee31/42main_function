#include "libft.h"
#include <assert.h>

void	f(unsigned int pos, char *c)
{
	static unsigned int i = 0;

	assert(pos == i);
	*c = i + '0';
	i++;
}

int	main(void)
{
	char	*s;

	s = "Hello,world!";
	ft_striteri(s, f(4, s));
	ft_putstr_fd(s, 1);
}
