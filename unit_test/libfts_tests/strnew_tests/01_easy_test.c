/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_easy_strnew_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:55 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <fcntl.h>

int     easy_strnew_test(void)
{
	char *s;

	s = ft_strnew(10);
	s[0] = 'a';
	if (s[0] == 'a')
		return (1);
	return (0);
}