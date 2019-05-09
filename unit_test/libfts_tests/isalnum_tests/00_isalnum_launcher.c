/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:16 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 12:45:03 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

void     isalnum_launcher()
{
	t_frame *lst;
	int 	res[2];

	lst = NULL;
	res[0] = 0;
	res[1] = 0;
	puts("ISALNUM :");
	load_test(&lst, " - Num test", &num_test);
	load_test(&lst, " - Char test", &char_test);
	load_test(&lst, " - Hash test", &hash_test);
	launch_test(lst, res);
}