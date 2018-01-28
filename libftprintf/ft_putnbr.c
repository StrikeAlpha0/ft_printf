/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/28 12:39:53 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
	printf("Numlen vaule at start putnbr:%d", pass->numlen);
	info->swi = 0;
	info->f = 0;
	ft_frontloadflag(n, info, pass);
		info->f = 0;
	printf("Numlen value after frontload:%d", pass->numlen);
	while (info->flag[info->f] != '-' && info->flag[info->f] != '\0')
		info->f++;
	info->f = 0;
	if (info->flag[info->f] == '\0' && pass->numlen < pass->width)
	{
		info->swi = 2;
		ft_flag_space(n, info, pass);
	}
	printf("Numlen value before midload:%d", pass->numlen);
	ft_midloadflag(n, info, pass);
	if (n < 0)
		n = -n;
	ft_putnbrup(n);
	printf("Numlen value before backload:%d", pass->numlen);
	ft_backloadflag(n, info, pass);
}
