/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 00:13:59 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/21 15:40:04 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_flag_plus(int n, t_inputinfo *info, t_passinfo *pass)
{
	if (n >= 0)
		ft_putchar('+');
}

void			ft_flag_space(int n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->numlen < pass->width)
	{
		while (pass->numlen < pass->width)
		{
			ft_putchar(' ');
			pass->numlen++;
		}
	}
}

void			ft_flag_minus(int n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->strlen == -1)
	{
		while (pass->numlen < pass->width)
		{
			ft_putchar(' ');
			pass->numlen++;
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
}

void			ft_flag_zero(int n, t_inputinfo *info, t_passinfo *pass)
{
	while (pass->numlen < pass->width)
	{
		ft_putchar('0');
		pass->numlen++;
	}
}

void			ft_flag_hash(int n, t_inputinfo *info, t_passinfo *pass)
{
	if (pass->strlen == -1)
		ft_putchar('0');
	if (pass->strlen == -2)
		ft_putstr("0x", info, pass);
	if (pass->strlen == -3)
		ft_putstr("0X", info, pass);
}
