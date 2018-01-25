/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frontloadflag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:27:37 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/25 00:11:15 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void			ft_frontloadflag(long n, t_inputinfo *info, t_passinfo *pass)
{
	pass->numlen = ft_numlen(n);
	if (info->flag[info->f] == '+')
	{
		ft_flag_plus(n, info, pass);
		info->f++;

	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		pass->numlen++;
	}
	if (info->flag[info->f] == ' ')
	{
		ft_flag_space(n, info, pass);
		info->f++;
	}
	if (info->flag[info->f] == '0' || info->flag[info->f] == '.')
	{
		ft_flag_zero(n, info, pass);
		info->f++;
	}	
}
/*
** Add while loop to take flags in any order.
*/
