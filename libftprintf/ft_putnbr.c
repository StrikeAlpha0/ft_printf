/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/23 21:01:48 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
	info->f = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		pass->numlen = ft_numlen(n) + 1;
	}
	else
		pass->numlen = ft_numlen(n);
	ft_frontloadflag(n, info, pass);
	ft_putnbrup(n);
	ft_backloadflag(n, info, pass);
}
