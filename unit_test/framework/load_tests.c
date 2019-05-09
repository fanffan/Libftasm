/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:33:24 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 16:00:53 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_tests(t_frame *frame, char *str, int (*f)(void))
{
	if (!frame->lst)
	{
		if (!(frame->lst = (t_lst*)malloc(sizeof(t_lst))))
			return ;
		frame->first = frame->lst;
	}
	else
	{
		if (!(frame->lst->next = (t_lst*)malloc(sizeof(t_lst))))
			return ;
		frame->lst = frame->lst->next;
	}
	frame->total++;
	bzero(frame->lst, sizeof(t_lst));
	frame->lst->name = strdup(str);
	frame->lst->f = f;
}
