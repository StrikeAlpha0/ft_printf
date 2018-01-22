/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 13:30:32 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/21 16:14:35 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *format, ...);

int main()
{
//	char *str = "%d%D%i%u%U%o%O%x%XfFeE%%gGaA%c%C%s%S%pn";
	int num = 42;
	int bacon = 12;
	char *str = "wub";
	//ft_print_hex(num);
//	char *duck = "-+ #0";
	char Ok = 'K';
	//ft_printf(str);
//	ft_printf("duck%010d", num);
	ft_printf("bacon %x %% %X %s", num, num, str);
	
	return (0);
}
