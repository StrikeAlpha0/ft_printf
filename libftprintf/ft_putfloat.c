/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:12:03 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/21 17:55:35 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libftprintf.h"

void		ft_putfloat(float long nbr, t_inputinfo *info, i_passinfo *pass)
{
	info->f = 0;
	if (info->flag[info->f] == '+')
	{
		ft_flag_plus(nbr, info, pass);
		info->f++;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
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
