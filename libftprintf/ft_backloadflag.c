/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backloadflag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:48:38 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/26 14:14:00 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_backloadflag(long n, t_inputinfo *info, t_passinfo *pass)
{
	info->f = 0;
	while (info->flag[info->f] != '\0')
	{
		if (info->flag[info->f] == '-')
		{
			pass->strlen = -1;
			ft_flag_minus(n, info, pass);
			info->f++;
		}
		info->f++;
	}
}

/*
** Add while loop to take flags in any order.
*/
