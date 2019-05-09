/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isascii_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:16 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:21:34 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

void     isdigit_launcher(t_frame *frame)
{

	puts("FT_isdigit :");
	load_tests(frame, " - lowercase", &lower_isdigit_test);
	load_tests(frame, " - uppercase", &upper_isdigit_test);
	load_tests(frame, " - Hard", &hardigit_test);
	launch_tests(frame);
	puts("");
}