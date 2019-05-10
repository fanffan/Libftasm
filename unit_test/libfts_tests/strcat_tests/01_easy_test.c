/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_easy_strcat_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:55 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

int     easy_strcat_test(void)
{
	char *s1;
	char s2[10] = " ca va?";
	char *s3;
	char s4[10] = " ca va?";

	//Mine
	s1 = malloc(20);
	bzero(s1, 20);
	memcpy(s1, "coucou", 6);
	s1 = ft_strcat(s1, s2);

	//Real
	s3 = malloc(20);
	bzero(s3, 20);
	memcpy(s3, "coucou", 6);
	s3 = strcat(s3, s4);
	if (!strcmp(s1, s3))
		return (1);
	return (0);
}