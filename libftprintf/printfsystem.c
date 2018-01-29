/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfsystem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 17:14:39 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/28 17:47:56 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_address(unsigned long n, t_inputinfo *info, t_passinfo *pass)
{
	ft_putstr("0x", info, pass);
	ft_print_hex(n, info, pass);
}
