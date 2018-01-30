/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfspecify.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:01:59 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/29 22:52:44 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_printfspecify(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	if (ft_strstr((info->flag), "hh"))
		ft_putnbr(((signed char)va_arg(*list, int)), info, pass);	
	else if (ft_strstr((info->flag), "h"))
		ft_putnbr(((short int)va_arg(*list, int)), info, pass);
	else if (ft_strstr((info->flag), "ll"))
		ft_putnbr(((long long)va_arg(*list, int)), info, pass);
	else if (ft_strstr((info->flag), "l"))
		ft_putnbr(((long int)va_arg(*list, int)), info, pass);
	else if (ft_strstr((info->flag), "j"))
		ft_putnbr(((intmax_t)va_arg(*list, int)), info, pass);
	else if (ft_strstr((info->flag), "z"))
		ft_putnbr(((size_t)va_arg(*list, int)), info, pass);
}
