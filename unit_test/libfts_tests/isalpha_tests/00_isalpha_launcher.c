/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalpha_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:16 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 17:56:59 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

void     isalpha_launcher(t_frame *frame)
{

	puts("FT_ISALPHA :");
	load_tests(frame, " - Lowercase", &lower_test);
	load_tests(frame, " - Uppercase", &upper_test);
	load_tests(frame, " - Hard", &hardpha_test);
	launch_tests(frame);
	puts("");
}