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

void     putchar_launcher(t_frame *frame)
{

	puts("ft_putchar :");
	load_tests(frame, " - 1 char", &easy_putchar_test);
	load_tests(frame, " - 1 str", &medium_putchar_test);
	load_tests(frame, " - Big size", &hard_putchar_test);
	launch_tests(frame);
	puts("");
}