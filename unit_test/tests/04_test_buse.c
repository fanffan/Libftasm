/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 23:10:30 by fmaury            #+#    #+#             */
/*   Updated: 2017/02/12 02:22:50 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void		pt_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while(src[i])
	{
		dest[i] = src[2];
		i++;
	}
}

int			test_buse()
{
	pt_strcpy("lolol","michel");
	return 0;
}

