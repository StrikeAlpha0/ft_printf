/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfspecify.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:01:59 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/30 09:53:47 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_printfspecify(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	int q;

	if ((q = ft_strstr((info->flag), "hh")) && q == 1)
		ft_putnbr(((signed char)va_arg(*list, int)), info, pass);	
	else if ((q = ft_strstr((info->flag), "h")) && q == 1)
		ft_putnbr(((short int)va_arg(*list, int)), info, pass);
	else if ((q = ft_strstr((info->flag), "ll")) && q == 1)
		ft_putnbr(((long long)va_arg(*list, int)), info, pass);
	else if ((q = ft_strstr((info->flag), "l")) && q == 1)
		ft_putnbr(((long int)va_arg(*list, int)), info, pass);
	else if ((q = ft_strstr((info->flag), "j")) && q == 1)
		ft_putnbr(((intmax_t)va_arg(*list, int)), info, pass);
	else if ((q = ft_strstr((info->flag), "z")) && q == 1)
		ft_putnbr(((size_t)va_arg(*list, int)), info, pass);
}
