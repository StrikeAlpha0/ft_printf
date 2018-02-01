/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 22:42:31 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/31 21:40:24 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char const *s, t_inputinfo *info, t_passinfo *pass)
{
	int i;

	i = 0;
	info->f = 0;
	if (s == NULL)
		 write(1, "(null)", 6);
	while (info->flag[info->f] != '.' && info->flag[info->f] != '\0')
		info->f++;
	if (info->flag[info->f] == '.' && info->flag[info->f] !='\0')
	{
		info->f++;
		pass->precision = ft_atoi(info->flag + info->f);
	}
	while (s + i != NULL && *(s + i) != '\0' && info->p < info->precision )
	{
		ft_putchar(*(s + i));
		i++;
		pass->p++;
		pass->final_count++;
	}
	if (info->flag[info->f] == '-')
		ft_flag_minus(*s, info, pass);
}
