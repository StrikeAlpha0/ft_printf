/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfwriter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 23:09:03 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 20:25:56 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_per_s(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	ft_putstr(va_arg(*list, char *), info, pass);
}

void		ft_per_c(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	ft_putchar((char)va_arg(*list, int));
	info->count++;
	pass->count++;
}

void		ft_per_per(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	void *nns;

	ft_putchar('%');
	info->count++;
	pass->count++;
	nns = list;
}
