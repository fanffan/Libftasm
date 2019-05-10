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

void     memcpy_launcher(t_frame *frame)
{

	puts("ft_memcpy :");
	load_tests(frame, " - Normal str", &easy_memcpy_test);
	load_tests(frame, " - NULL str", &medium_memcpy_test);
	load_tests(frame, " - Begin str", &hard_memcpy_test);
	launch_tests(frame);
	puts("");
}