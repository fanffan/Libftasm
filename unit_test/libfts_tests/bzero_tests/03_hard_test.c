/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_hard_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/13 15:05:29 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <ctype.h>
#include <fcntl.h>

int     hard_bzero_test(void)
{
	char *s;
	int i;

	i = 0;
	s = strdup("haiopoiuyt");
	ft_bzero(s, 5);
	for (; i < 10; i++)
	{
		if (s[i] != 0)
			break;
	}
	if (i == 5)
		return (1);
	return (0);
}