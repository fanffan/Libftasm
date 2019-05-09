/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_big_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:06:23 by fmaury            #+#    #+#             */
/*   Updated: 2017/02/11 22:10:00 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static unsigned long int pt3_strlen(char *str)
{
	unsigned long int i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int test_segv(void)
{
	char *str;
	
	str = NULL;
	if (strlen(str) == pt3_strlen(str))
		return (0);
	else
		return(-1);
}
