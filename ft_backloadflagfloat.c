/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backloadflagfloat.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:55:16 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 17:05:35 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_backloadflagfloat(long n, t_inputinfo *info, t_passinfo *pass)
{
	if (info->flag[info->f] == '-')
	{
		pass->strlen = -1;
		ft_flag_minus(n, info, pass);
		info->f++;
	}
	if (info->flag[info->f] == '.')
	{
		ft_flag_zero(n, info, pass);
		info->f++;
	}	
}
