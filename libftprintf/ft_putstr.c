/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 22:42:31 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/24 23:02:06 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char const *s, t_inputinfo *info, t_passinfo *pass)
{
	int i;

	i = 0;
	if (s == NULL)
		 write(1, "(null)", 6);
	while (s + i != NULL && *(s + i) != '\0')
	{
		ft_putchar(*(s + i));
		i++;
	}
	if (info->flag[info->f] == '-')
		ft_flag_minus(*s, info, pass);
}
