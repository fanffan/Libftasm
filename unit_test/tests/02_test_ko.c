/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:06:23 by fmaury            #+#    #+#             */
/*   Updated: 2017/02/11 22:18:03 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int pt2_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return (i - 1);
}

int test_ko(void)
{
	if (strlen("salut") == pt2_strlen("salut"))
		return (0);
	else
		return(-1);
}
