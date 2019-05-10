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

void     isprint_launcher(t_frame *frame)
{

	puts("ft_isprint :");
	load_tests(frame, " - Uppercase", &easy_isprint_test);
	load_tests(frame, " - Number", &easy_isprint_test);
	load_tests(frame, " - Hard", &hard_isprint_test);
	launch_tests(frame);
	puts("");
}