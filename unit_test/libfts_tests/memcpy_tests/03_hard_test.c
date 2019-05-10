/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_hard_memcpy_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:33:22 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <ctype.h>

int     hard_memcpy_test(void)
{
	char s[5] = "";
	char *s1;
	char *s2;

	s1 = malloc(100);
	s2 = malloc(100);
	bzero(s1, 100);
	bzero(s2, 100);
	s1 = (char *)ft_memcpy(s1, s, 5);
	s2 = (char *)memcpy(s1, s, 5);
	if (!strcmp(s1,s2))
	{
		free(s1);
		free(s2);
		return (1);
	}
	return (0);
}