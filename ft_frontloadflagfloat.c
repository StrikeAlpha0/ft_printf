/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frontloadflagfloat.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:59:46 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 16:53:36 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
//numlen needs floating version
void	ft_frontloadflagfloat(float long n, t_inputinfo *info, t_passinfo *pass)
{
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
	if (info->flag[info->f] == '0')
	{
		ft_flag_zero(n, info, pass);
		info->f++;
	}
}
