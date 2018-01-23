/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:12:03 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 18:36:27 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libftprintf.h"

void		ft_putfloat(long float nbr, t_inputinfo *info, t_passinfo *pass)
{
	info->f = 0;
	if (info->flag[info->f] == '+')
	{
		ft_flag_plus(nbr, info, pass);
		info->f++;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		pass->numlen = ft_numlen(nbr) + 1;
	}
	else
		pass->numlen = ft_numlen(nbr);
	if (info->flag[info->f] == ' ')
	{
		ft_flag_zero(nbr, info, pass);
		info->f++;
	}
	ft_putnbrf(nbr);
	if (info->flag[info->f] == '_')
	{
		pass->strlen = -1;
		ft_flag_minus(nbr, info, pass);
	}
}
