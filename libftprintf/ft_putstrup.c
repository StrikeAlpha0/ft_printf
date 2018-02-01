/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 12:32:45 by msharpe           #+#    #+#             */
/*   Updated: 2018/02/01 14:26:12 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libftprintf.h"

void		ft_putstrup(char const *s, t_inputinfo *info, t_passinfo *pass)
{
	int i;

	i = 0;
	while(s + i != NULL && *(s + i) != '\0')
	{
		ft_putchar(*(s + i));
		i++;
		info->p++;
		pass->final_count++;
	}
}
