/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:26:25 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:06:30 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <signal.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>
# include <stdio.h>
# include <strings.h>

typedef struct			s_lst
{
	char				*name;
	int					(*f)(void);
	struct s_lst		*next;
}						t_lst;

typedef struct			s_frame
{
	t_lst				*first;
	t_lst				*lst;
	int					total;
	int					succ;
}						t_frame;

void					load_tests(t_frame *frame, char *str, int (*f)(void));
void					launch_tests(t_frame *frame);
void					print_output(t_frame *frame);
void					unload_tests(t_frame *frame);

#endif
