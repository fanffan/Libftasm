/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isdupper_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:16 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:33:22 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

void     strlen_launcher(t_frame *frame)
{

	puts("ft_strlen :");
	load_tests(frame, " - 1 char", &easy_strlen_test);
	load_tests(frame, " - Multi char", &medium_strlen_test);
	load_tests(frame, " - NULL", &hard_strlen_test);
	launch_tests(frame);
	puts("");
}