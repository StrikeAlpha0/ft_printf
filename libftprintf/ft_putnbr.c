/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/02/04 01:03:56 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
	int q = 0;
	info->swi = 0;
	info->f = 0;
	info->z = 1;
	ft_frontloadflag(n, info, pass);
//	printf("OOOH NUMLEN:%d\n", pass->numlen);
	info->f = 0;
	while (info->flag[info->f] != '-' && info->flag[info->f] != '\0' &&
			info->flag[info->f] != '0')
		info->f++;
	q = pass->width - info->precision;
	if (info->precision > pass->width)
		pass->width = info->precision;
	if (info->flag[info->f] == '\0' && pass->numlen < pass->width && pass->width > info->precision && info->precision != 0)
	{
//		printf("The value of q is:%d", q);
		while (q > 0)
		{
			ft_putchar(' ');
			pass->final_count++;
			q--;
		}
//		pass->width = info->precision;
//		printf("A: The value of pass->width is %d\n Numlen = %d", pass->width, pass->numlen);
		ft_flag_zero(n, info, pass);
	}
	else if (info->flag[info->f] == '\0' && pass->numlen < pass->width && info->precision == pass->width)
	{
		pass->width = info->precision;
		pass->numlen = pass->numlen - 1;
		ft_flag_zero(n, info, pass);
//		printf("B");
	}
	else if (info->flag[info->f] == '\0' && pass->numlen < pass->width && q > 0)
	{
//		printf("C DEEZ The value of q is:%d", q);
		while (q > 0)
		{
			ft_putchar(' ');
			pass->final_count++;
			q--;
		}
		pass->width = info->precision;
		pass->numlen = pass->numlen - 1;

	}
	ft_midloadflag(n, info, pass);
	if (n < 0)
		n = -n;
	ft_putnbrup(n, info, pass);
	ft_backloadflag(n, info, pass);
}
