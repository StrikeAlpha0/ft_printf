/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/02/03 23:45:05 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
	int q;
	info->swi = 0;
	info->f = 0;
	info->z = 1;
	ft_frontloadflag(n, info, pass);
	info->f = 0;
	while (info->flag[info->f] != '-' && info->flag[info->f] != '\0' &&
			info->flag[info->f] != '0')
		info->f++;
//	printf("BEFORE:The value of precision is:%d, and width is %d, and info->f is:%c\n", info->precision, pass->width, info->flag[info->f+1]);
	q = pass->width - info->precision;
	if (info->precision > pass->width)
	{
		pass->width = info->precision;
		info->swi = 3;
	}
	else if (pass->width > info->precision && info->precision != 0) 
		pass->width = info->precision;

//	printf("AFTER:The value of precision is:%d, and width is %d, and info->f is:%c and info->swi is: %d\n", info->precision, pass->width, info->flag[info->f+1], info->swi);
	if (info->swi == 3 && pass->numlen < pass->width)
	{
		info->swi = 2;
		while (q > 0)
		{
			ft_putchar(' ');
			pass->final_count++;
			q--;
		}
	//	ft_flag_space(n, info, pass);
	}
	else if (info->swi == 0 && pass->numlen < pass->width && q == pass->width)
	{
		while (q > 0)
		{
			ft_putchar(' ');
			pass->final_count++;
			q--;
		}
		pass->numlen = pass->numlen;
		ft_flag_zero(n, info, pass);
	}
/*	else if (info->flag[info->f] == '\0' && pass->numlen < pass->width && info->precision < pass->width)
	{
		pass->width = info->precision;
	//	pass->numlen = pass->numlen - 1;
		info->swi = 2;
		ft_flag_space(n, info, pass);
	}*/
	ft_midloadflag(n, info, pass);
	if (n < 0)
		n = -n;
	ft_putnbrup(n, info, pass);
	ft_backloadflag(n, info, pass);
}
