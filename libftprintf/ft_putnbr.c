/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/25 21:00:38 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
	info->f = 0;
	if (n < 0)
		pass->numlen++;
	ft_frontloadflag(n, info, pass);
	if (n < 0) 
		n = -n; 
	//ft_midloadflag(n, info, pass);
	ft_putnbrup(n);
	if (info->flag[info->f == '-'])
	{
		pass->strlen = -1;
		ft_flag_minus(n, info, pass);
		info->f++;
	}
}
