/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_hard_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/20 14:39:22 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <ctype.h>
#include <fcntl.h>

int     hard_strcpy_test(void)
{
	char *s1;
	char s2[] = "coucou ca va moi oui hihihihihihi ouiouiouiuoiuiouiouiuoiuoiuoiuoiuoiu";

	s1 = malloc(strlen(s2) + 1);
	s1 = ft_strcpy(s1, s2);
	if (!strcmp(s1, s2))
		return (1);
	return (0);
}