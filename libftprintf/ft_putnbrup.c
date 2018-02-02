/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 23:20:56 by msharpe           #+#    #+#             */
/*   Updated: 2018/02/01 22:41:44 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_putnbrup(unsigned long n, t_passinfo *pass)
{
	if (n > 9)
	{
		ft_putnbrup(n / 10, pass);
		ft_putnbrup(n % 10, pass);
	}
	else
	{
		ft_putchar(n + '0');
		pass->final_count++;
	}
}
