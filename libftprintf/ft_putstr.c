/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 22:42:31 by msharpe           #+#    #+#             */
/*   Updated: 2018/02/01 12:20:42 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char const *s, t_inputinfo *info, t_passinfo *pass)
{
	int i;
	int n;

	i = 0;
	n = 0;
	info->f = 0;
	if (s == NULL)
		 write(1, "(null)", 6);
	while (info->flag[info->f] != '.' && info->flag[info->f] != '\0')
		info->f++;
	if (info->flag[info->f] == '.' && info->flag[info->f] !='\0')
		ft_flag_period(n, info, pass);
	while (s + i != NULL && *(s + i) != '\0' && info->p < info->precision )
	{
		ft_putchar(*(s + i));
		i++;
		info->p++;
		pass->final_count++;
	}
	if (info->flag[info->f] == '-')
		ft_flag_minus(*s, info, pass);
}
