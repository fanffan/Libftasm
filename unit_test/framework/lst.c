/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:28:15 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 10:58:47 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_frame			*init_lst(t_frame *lst, char *str, int (*f)(void))
{
	if (!(lst = malloc(sizeof(t_frame))))
		return (NULL);
	bzero(lst, sizeof(*lst));
	lst->name = strdup(str);
	lst->f = f;
	lst->check = 0;
	lst->next = NULL;
	return (lst);
}

void			new_maillon(t_frame *lst, char *str, int (*f)(void))
{
	while (lst->next != NULL)
		lst = lst->next;
	if (!(lst->next = malloc(sizeof(t_frame))))
		return ;
	bzero(lst->next, sizeof(*lst->next));	
	lst = lst->next;
	lst->name = strdup(str);
	lst->f = f;
	lst->check = 0;
	lst->next = NULL;
}
