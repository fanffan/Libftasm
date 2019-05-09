/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:25:08 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 15:25:49 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_output(t_frame *frame)
{
	printf("Total: %d/%d tests ok\n", frame->succ, frame->total);
}
