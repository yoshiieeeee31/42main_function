/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykusano <ykusano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:53:12 by ykusano           #+#    #+#             */
/*   Updated: 2022/12/21 15:10:35 by ykusano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*c1;
	char	*str;

	s1 = "PiscineppiscineiscinepiscineClanguage_yohsinari_lisp_python_C#_42tokyo-piscinepiscinepiscinepiscine20221042paris-piscine20201042siliconvalley-piscine201905Piscine";
	c1 = "piscine";
	str = ft_strtrim(s1, c1);
	printf("%d\n%d\n", (int)ft_strlen(s1), (int)ft_strlen(str));
	printf("%s\n", str);
	printf("%s\n", s1);
	printf("%s\n", c1);
}
