/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:33:24 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:05:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	unload_tests(t_frame *frame)
{
	t_lst *lst;
	while (frame->lst)
	{
		lst = frame->lst;
		frame->lst = frame->lst->next;
		bzero(lst, sizeof(t_lst));
		free(lst);
	}
	frame->lst = NULL;
	frame->first = NULL;
}	

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
	frame->lst->name = str;
	frame->lst->f = f;
}
