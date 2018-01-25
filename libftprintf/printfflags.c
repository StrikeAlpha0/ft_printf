/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 00:13:59 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/24 23:45:32 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_flag_plus(long n, t_inputinfo *info, t_passinfo *pass)
{
	if (n >= 0)
		ft_putchar('+');
	pass->numlen++;
	info->count++;
	pass->count++;
}

void			ft_flag_space(long n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->numlen < pass->width)
	{
		while (pass->numlen < pass->width)
		{
			ft_putchar(' ');
			pass->numlen++;
			n = n;
		}
	}
	info->count++;
}

void			ft_flag_minus(long n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->strlen == -1)
	{
		while (pass->numlen < pass->width)
		{
			ft_putchar(' ');
			pass->numlen++;
			n = n;
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

void			ft_flag_zero(long n, t_inputinfo *info, t_passinfo *pass)
{
	while (pass->numlen < pass->width)
	{
		ft_putchar('0');
		pass->numlen++;
	}
	n = n;
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
	n = n;
}
