/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_midloadflag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 13:32:14 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/25 13:44:09 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_midloadflag(long n, t_inputinfo *info, t_passinfo *pass)
{
	info->f = 0;
	while (info->flag[info->f] != '\0' && info->flag[info->f] != '-')
	{
		if (info->flag[info->f] == '0' || info->flag[info->f] == '.')
		{
			ft_flag_zero(n, info, pass);
			info->f++;
		}
		info->f++;
	}
}
