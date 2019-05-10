/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_easy_strdup_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:55 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

int     easy_strdup_test(void)
{
	char *s2;
	char *s1;

	s1 = ft_strdup("Salut");
	s2 = strdup("Salut");
	if (!strcmp(s1,s2))
	{
		free(s1);
		free(s2);
		return (1);
	}
	return (0);
}