/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_hard_strcat_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:33:22 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <ctype.h>

int     hard_strcat_test(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;

	//Mine
	s1 = malloc(20);
	bzero(s1, 20);
	s2 = strdup("coucou");
	s1 = ft_strcat(s1, s2);

	//Real
	s3 = malloc(20);
	bzero(s3, 20);
	s4 = strdup("coucou");
	s3 = strcat(s3, s4);
	if (!strcmp(s1, s3))
		return (1);
	return (0);


}