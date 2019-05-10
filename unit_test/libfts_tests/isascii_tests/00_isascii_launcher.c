/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isascii_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:16 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/10 10:57:15 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

void     isascii_launcher(t_frame *frame)
{

	puts("FT_isascii :");
	load_tests(frame, " - lowercase", &lower_isascii_test);
	load_tests(frame, " - uppercase", &upper_isascii_test);
	load_tests(frame, " - Hard", &hardscii_test);
	launch_tests(frame);
	puts("");
}