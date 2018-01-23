/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 00:13:59 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 20:14:10 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_flag_plus(int n, t_inputinfo *info, t_passinfo *pass)
{
	if (n >= 0)
		ft_putchar('+');
	info->count++;
	pass->count++;
}

void			ft_flag_space(int n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->numlen < pass->width)
	{
		while (pass->numlen < pass->width)
		{
			ft_putchar(' ');
			pass->numlen++;
			n = n * 1;
		}
	}
	info->count++;
}

void			ft_flag_minus(int n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->strlen == -1)
	{
		while (pass->numlen < pass->width)
		{
			ft_putchar(' ');
			pass->numlen++;
			n = n * 1;
		}
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

void			ft_flag_zero(int n, t_inputinfo *info, t_passinfo *pass)
{
	while (pass->numlen < pass->width)
	{
		ft_putchar('0');
		pass->numlen++;
	}
	n = n * 1;
	info->count++;
}

void			ft_flag_hash(int n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->strlen == -1)
		ft_putchar('0');
	if (pass->strlen == -2)
		ft_putstr("0x", info, pass);
	if (pass->strlen == -3)
		ft_putstr("0X", info, pass);
	n = n * 1;
}
