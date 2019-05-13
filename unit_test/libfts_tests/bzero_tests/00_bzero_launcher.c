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

void     bzero_launcher(t_frame *frame)
{

	puts("ft_bzero :");
	load_tests(frame, " - Unintialized", &easy_bzero_test);
	load_tests(frame, " - Initialized", &medium_bzero_test);
	load_tests(frame, " - Half str", &hard_bzero_test);
	launch_tests(frame);
	puts("");
}