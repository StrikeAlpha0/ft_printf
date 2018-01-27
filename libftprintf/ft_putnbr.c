/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/26 19:56:24 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
//	printf("%d\n", pass->numlen);
	info->swi = 0;
	info->f = 0;
	ft_frontloadflag(n, info, pass);
	if (n < 0)
	{
		n = -n;
		pass->numlen++;
	}
//	printf("%d\n", pass->numlen);
	//ft_midloadflag(n, info, pass);
	ft_putnbrup(n);
	ft_backloadflag(n, info, pass);
}
