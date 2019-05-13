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

void     cat_launcher(t_frame *frame)
{

	puts("ft_cat :");
	load_tests(frame, " - Normal str", &easy_cat_test);
	load_tests(frame, " - NULL str", &medium_cat_test);
	load_tests(frame, " - Begin str", &hard_cat_test);
	launch_tests(frame);
	puts("");
}