/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frontloadflag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:27:37 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/28 13:23:54 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void			ft_frontloadflag(long n, t_inputinfo *info, t_passinfo *pass)
{
	int x;

	x = 0;
//	printf("Numlen value at start of frontload:%d", pass->numlen); 
	if (n < 0)
	{
		n = -n;
		pass->numlen++;
		info->swi = 1;
		x = 1;
	}
	pass->numlen += ft_numlen(n);
	info->f = 0;
//	printf("Numlen value after negative check/before flag check:%d", pass->numlen);
	while (info->flag[info->f] != '\0')
	{
//		printf("Current flag value,%c", info->flag[info->f]);
		if (info->flag[info->f] == ' ')
			ft_flag_space(n, info, pass);
//		printf("Numlen value after space flag:%d", pass->numlen);
		if (info->flag[info->f] == '+' && x == 0)
			ft_flag_plus(n, info, pass);
		//if (info->flag[info->f] == '0' || info->flag[info->f] == '.')
		//	ft_flag_zero(n, info, pass);
		info->f++;
	}
//	printf("numlen vaule after frontload:%d", pass->numlen);
}
