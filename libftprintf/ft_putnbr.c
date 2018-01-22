/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/21 17:11:50 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
	info->f = 0;
	if (info->flag[info->f] == '+')
	{
		ft_flag_plus(n, info, pass);
		info->f++;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		pass->numlen = ft_numlen(n) + 1;
	}
	else
		pass->numlen = ft_numlen(n);
	if (info->flag[info->f] == ' ')
	{
		ft_flag_space(n, info, pass);
		info->f++;
	}
	if (info->flag[info->f] == '0' || info->flag[info->f] == '.')
	{
		ft_flag_zero(n, info, pass);
		info->f++;
	}
	ft_putnbrup(n);
	if (info->flag[info->f] == '-')
	{
		pass->strlen = -1;
		ft_flag_minus(n, info, pass);
	}
}
