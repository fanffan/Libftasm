/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_easy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:06:23 by fmaury            #+#    #+#             */
/*   Updated: 2017/02/11 22:31:18 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int pt_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int test_ok(void)
{
	if (strlen("salut") == pt_strlen("salut"))
		return (0);
	else
		return(-1);
}
