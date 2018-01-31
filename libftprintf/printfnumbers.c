/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 23:17:05 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/30 19:20:18 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void			ft_per_doi(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	while (g_cast_table[info->cast].name != '\0' && info->flag[info->cast] != g_cast_table[info->cast].name)
	   info->cast++;
	if (info->flag[info->cast] != '\0' && info->flag[info->cast] == g_cast_table[info->cast].name)
	{
		ft_printfspecify(list, info, pass);
		return ;
	}	
	else 
		ft_putnbr(((long)va_arg(*list, int)), info, pass);
}

void			ft_per_dup(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	while (g_cast_table[info->cast].name != '\0' && info->flag[info->cast] != g_cast_table[info->cast].name)
	   info->cast++;
	if (info->flag[info->cast] != '\0' && info->flag[info->cast] == g_cast_table[info->cast].name)
	{
		ft_printfspecify(list, info, pass);
		return ;
	}
	ft_putnbr(va_arg(*list, long), info, pass);
}

void			ft_per_uup(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	while (g_cast_table[info->cast].name != '\0' && info->flag[info->cast] != g_cast_table[info->cast].name)
	   info->cast++;
	if (info->flag[info->cast] != '\0' && info->flag[info->cast] == g_cast_table[info->cast].name)
	{
		ft_printfspecify(list, info, pass);
		return ;
	}
	ft_putnbr(va_arg(*list, unsigned int), info, pass);
}

void			ft_per_u(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	while (g_cast_table[info->cast].name != '\0' && info->flag[info->cast] != g_cast_table[info->cast].name)
	   info->cast++;
	if (info->flag[info->cast] != '\0' && info->flag[info->cast] == g_cast_table[info->cast].name)
	{
		ft_printfspecify(list, info, pass);
		return ;
	}
	ft_putnbr(va_arg(*list, unsigned int), info, pass);
}

/*void			ft_per_f(va_list *list, t_inputinfo *info, t_passinfo *pass)
{
	ft_putfloat(va_arg(*list, float long), info, pass);
}*/
