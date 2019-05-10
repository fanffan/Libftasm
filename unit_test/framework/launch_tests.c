/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:03:33 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/10 10:59:29 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		ft_fork(pid_t pid)
{
	int		state;

	waitpid(pid, &state, 0);
	if (WIFSIGNALED(state))
	{
		if (WTERMSIG(state) == SIGBUS)
			puts("\x1b[31mBUS\x1b[0m]");
		else if (WTERMSIG(state) == SIGSEGV)
			puts("\x1b[31mSEGV\x1b[0m]");
	}
	if (WIFEXITED(state))
	{
		if (WEXITSTATUS(state) == 0)
			return (1);
	}
	return (0);
}

int		test_fnct(t_lst *lst)
{
	pid_t	pid;

	pid = fork();
	if (pid == -1)
		return (0);
	if (!pid)
	{
		if (lst->f())
		{
			puts("\x1b[32mOK\x1b[0m]");
			exit(0);
		}
		else
			puts("\x1b[31mKO\x1b[0m]");
		exit (1);
	}
	return (ft_fork(pid));
}

void	launch_tests(t_frame *frame)
{
	t_lst *lst;

	lst = frame->first;
	while (lst)
	{
		write(1, lst->name, strlen(lst->name));
		if (strlen(lst->name) < 8)
			write(1, "\t\t\t[", 4);
		else
			write(1, "\t\t[", 3);
		frame->succ += test_fnct(lst);
		lst = lst->next;
	}
	unload_tests(frame);
}