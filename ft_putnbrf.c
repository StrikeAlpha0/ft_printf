/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 17:55:50 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 18:32:06 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_putnbrf(long float n, t_inputinfo *info, t_passinfo *pass)
{
	if (n > 9)
	{
		ft_putnbrf(n / 10);
		ft_putnbrf(n % 10);
	}
	else
		ft_putchar(n + '0');


