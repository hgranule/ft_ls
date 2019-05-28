/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:47:43 by hgranule          #+#    #+#             */
/*   Updated: 2019/05/28 14:34:55 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls_inc.h"
#include <fcntl.h>

t_flags		g_flags;
t_dlist		*g_names;

int		lol(void *a, void *b)
{
	return(ft_strcmp(a, b));
}

int		main(const int ac, const char **av)
{
	g_flags.general_flags = DRW_MCOL;
	g_names = 0;
	ls_input_parser(&g_flags, &g_names, ac, av);

	ft_dlst_rgnsort(&g_names, &lol);

	return (0);
}
