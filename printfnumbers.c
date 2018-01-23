/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 23:17:05 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 19:50:59 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void			ft_per_doi(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	ft_putnbr(va_arg(*list, int), info, pass);
}

void			ft_per_dup(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	ft_putnbr(va_arg(*list, long int), info, pass);
}

void			ft_per_uup(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	ft_putnbr(va_arg(*list, unsigned int), info, pass);
}

void			ft_per_u(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	ft_putnbr(va_arg(*list, unsigned int), info, pass);
}

/*void			ft_per_f(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	ft_putfloat(va_arg(*list, float long), info, pass);
}*/