/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isdlower_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:16 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:33:22 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

void     tolower_launcher(t_frame *frame)
{

	puts("FT_tolower :");
	load_tests(frame, " - number", &lower_tolower_test);
	load_tests(frame, " - uppercase", &upper_tolower_test);
	load_tests(frame, " - Hard", &hardlower_test);
	launch_tests(frame);
	puts("");
}