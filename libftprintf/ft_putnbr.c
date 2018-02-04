/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/02/04 10:13:58 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
 	info->swi = 0;
 	info->f = 0;
 	info->z = 1;
 	ft_frontloadflag(n, info, pass);
 	info->f = 0;
  	while (info->flag[info->f] != '-' && info->flag[info->f] != '\0' &&
  			info->flag[info->f] != '0')
  		info->f++;
///*	if (info->precision > 0 && info->flag[info->f] == '\0')
//	{
		if (info->precision > pass->width)
			pass->width = info->precision;
 		if (info->flag[info->f] == '\0' && pass->numlen < pass->width && pass->width > info->precision)
  		{
  			info->swi = 2;
  			ft_flag_space(n, info, pass);
  		}
		else if (info->precision > 0 && info->flag[info->f] == '\0')
		{
			while((pass->width - info->precision) > 0)
			{
				ft_putchar(' ');
				pass->width--;
			}
		}
//	}
 	else if (info->flag[info->f] == '\0' && pass->numlen < pass->width && info->precision > pass->width)
 	{
 		pass->width = info->precision;
		pass->numlen--;
 		ft_flag_zero(n, info, pass);
 	}
  	ft_midloadflag(n, info, pass);
  	if (n < 0)
  		n = -n;
 	ft_putnbrup(n, info, pass);
 	ft_backloadflag(n, info, pass);
 }

//you might want to add something after the midload.
