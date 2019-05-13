/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_easy_memalloc_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <fcntl.h>
#include <string.h>

int     medium_memalloc_test(void)
{	
	char *s;
	
	s = ft_memalloc(10);
	memcpy(s, "coucou", 7);
	if (!strcmp(s, "coucou"))
		return (1);
	return (0);
}