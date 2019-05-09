/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:26:25 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 11:18:17 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <signal.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>
# include "../libft/srclib/libft.h"

typedef struct			s_frame
{
	char				*name;
	int					(*f)(void);
	int					check;
	struct s_frame		*next;
}						t_frame;

void					aff_res(int *res);
t_frame					*init_lst(t_frame *lst, char *str, int (*f)(void));
void					new_maillon(t_frame *lst, char *str, int (*f)(void));
void					load_test(t_frame **lst, char *name, int (*f)(void));
void					launch_test(t_frame *lst, int *res);
int						ft_valid_test(int flag);
int						ft_test_nbr(int flag);
void					launcher(int *check);

#endif
