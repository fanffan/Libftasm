/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_easy_strlen_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

int     medium_strlen_test(void)
{	
	char *s;

	s = strdup("aaaaagaagagshajhgdahjgshjagdhjagdjhasghjdgasjhdgasjhgdajhsgdjasgdjhasgdgasdgasjhgdasjhgdjahsgdjhgdjhgsajhdgasjhgdasjhgdasj");
	if (ft_strlen(s) == (int)strlen(s))
		return (1);
	printf("res: %d real:%d", ft_strlen(s),(int)strlen(s));

    return (0);
}