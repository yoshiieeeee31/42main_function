#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int             main(void)
{
        int             i;

        i = -100;
        while (i <= 200)
        {
                if (isascii(i))
                        printf("original \t= \t%d : %c\n", i, i);
                else
                        printf("%d : \tNO\n", i);
                if (ft_isascii(i))
                        printf("ft       \t= \t%d : %c\n", i, i);
                else
                        printf("%d : \tNO\n", i);
                i++;
                putchar('\n');
        }
        return (0);
}