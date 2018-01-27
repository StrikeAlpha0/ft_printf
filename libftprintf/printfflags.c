/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 00:13:59 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/26 21:10:58 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>



void			ft_flag_plus(long n, t_inputinfo *info, t_passinfo *pass)
{
	if (n >= 0 && info)
	{
		ft_putchar('+');
		pass->numlen++;
	}
	info->swi++;
	pass->count++;
	
}

void			ft_flag_space(long n, t_inputinfo *info, t_passinfo *pass)
{
	int x;

	x = 0;
	if (n > 0 && info->swi == 0)
	{
		ft_putchar(' ');
		pass->numlen++;
		info->swi++;
	}
	/*else if (n > 0 && info->switch1 == 0)
	{
		ft_putchar(' ');
		info->switch1++;
	}*/
}

void			ft_flag_minus(long n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->strlen == -1)
	{
		while (pass->numlen < pass->width)
		{
			ft_putchar(' ');
			pass->numlen++;
			
		}
		n = n * 1;
	}
	else if (pass->numlen == -1)
	{
		while (pass->strlen < pass->width)
		{
			ft_putchar(' ');
			pass->strlen++;
		}
	}
	info->count++;
}

void			ft_flag_zero(long n, t_inputinfo *info, t_passinfo *pass)
{
	while (pass->numlen < pass->width)
	{
		ft_putchar('0');
		pass->numlen++;
	}
	n = n * 1;
	info->count++;
}

void			ft_flag_hash(long n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->strlen == -1)
		ft_putchar('0');
	if (pass->strlen == -2)
		ft_putstr("0x", info, pass);
	if (pass->strlen == -3)
		ft_putstr("0X", info, pass);
	n = n * 1;
}
