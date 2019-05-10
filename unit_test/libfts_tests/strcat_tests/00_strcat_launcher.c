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

void     strcat_launcher(t_frame *frame)
{

	puts("ft_strcat :");
	load_tests(frame, " - 2 str", &easy_strcat_test);
	load_tests(frame, " - 1 str NULL", &medium_strcat_test);
	load_tests(frame, " - 2 str NULL", &hard_strcat_test);
	launch_tests(frame);
	puts("");
}