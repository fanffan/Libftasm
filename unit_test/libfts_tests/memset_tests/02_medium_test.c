/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_easy_memset_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

int     medium_memset_test(void)
{	
	char *s;
	char *s2;
	char *s1;

	s = strdup("");
	s1 = (char *)ft_memset(s, 65, strlen(s));
	s2 = (char *)memset(s, 65, strlen(s));
	if (!strcmp(s1,s2))
		return (1);
	return (0);
}