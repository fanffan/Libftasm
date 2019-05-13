/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_hard_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/13 15:19:36 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <ctype.h>
#include <fcntl.h>

int     hard_isupper_test(void)
{
	int i;

	i = -1000;
	while (i < 2000)
	{
		if (ft_isupper(i) != isupper(i))
		{
			printf("%d\n", i);
			return (0);
		}
		i++;
	}
    return (1);
}