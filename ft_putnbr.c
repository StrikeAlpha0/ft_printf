/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:29:01 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 15:56:54 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass)
{
	info->f = 0;
	ft_frontloadflag(n, info, pass);
	ft_putnbrup(n);
	ft_backloadflag(n, info, pass);
}
