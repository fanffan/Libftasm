/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_easy_cat_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:03:55 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"
#include <fcntl.h>

int     easy_cat_test(void)
{
	int fd;

	fd = open("./file.txt", O_RDONLY);
	ft_cat(fd);
	return (1);
}