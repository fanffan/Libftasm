/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_easy_strdup_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

int     medium_strdup_test(void)
{	
	char *s2;
	char *s1;

	s1 = ft_strdup("Salutssahdkjahdakjsdgajshgdhjasgdhjasgdhasfgdghasfdhasgdhjasgdhgasjhdgajhdgajhgdahsgdahjsgdas");
	s2 = strdup("Salutssahdkjahdakjsdgajshgdhjasgdhjasgdhasfgdghasfdhasgdhjasgdhgasjhdgajhdgajhgdahsgdahjsgdas");
	if (!strcmp(s1,s2))
	{
		free(s1);
		free(s2);
		return (1);
	}
	return (0);
}