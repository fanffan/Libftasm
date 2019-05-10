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

void     strdup_launcher(t_frame *frame)
{

	puts("ft_strdup :");
	load_tests(frame, " - Normal str", &easy_strdup_test);
	load_tests(frame, " - Long str", &medium_strdup_test);
	load_tests(frame, " - Null str", &hard_strdup_test);
	launch_tests(frame);
	puts("");
}