/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:33:24 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 11:18:11 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_frame **lst, char *str, int (*f)(void))
{
	if (*lst == NULL)
		*lst = init_lst(*lst, str, f);
	else
		new_maillon(*lst, str, f);
}

int		ft_fork(void)
{
	int		state;

	wait(&state);
	if (WIFSIGNALED(state))
	{
		if (WTERMSIG(state) == SIGBUS)
			puts("\t:\t[\x1b[31mBUS]\x1b[0m");
		else if (WTERMSIG(state) == SIGSEGV)
			puts("\t:\t[\x1b[31mSEGV]\x1b[0m");
	}
	if (WIFEXITED(state))
	{
		if (WEXITSTATUS(state) == 0)
			return (1);
	}
	return (0);
}

int		test_fnct(t_frame *lst)
{
	int		ret;
	pid_t	pid;

	pid = fork();
	if (pid == -1)
		return (0);
	if (pid == 0)
	{
		if (lst->f())
		{
			puts("\t:\t[\x1b[32mOK]\x1b[0m");
			return (1);
		}
		else
			puts("\t:\t[\x1b[31mKO]\x1b[0m");
		return (0);
	}
	else
		return (ft_fork());
}

void	launch_test(t_frame *lst, int *res)
{
	int		resf;

	resf = 0;
	while (lst)
	{
		printf("%s", (lst->name));
		resf = test_fnct(lst);
		res[0] += resf;
		res[1]++;
		lst = lst->next;
	}
}
