/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_hard_isprint_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:33:22 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <ctype.h>

int     hard_isprint_test(void)
{
	int i;

	i = -1000;
	while (i < 2000)
	{
		if (ft_isprint(i) != isprint(i))
		{
			printf("%d\n", i);
			return (0);
		}
		i++;
	}
    return (1);
}