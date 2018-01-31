/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializefunc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:20:07 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/30 19:23:13 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			initialize_pass_values(t_passinfo *pass_info)
{
	pass_info->n = 0;
	pass_info->numlen = 0;
	pass_info->strlen = 0;
	pass_info->width = 0;
	pass_info->stuff = "\0";
}

void			initialize_input_values(t_inputinfo *input_info)
{
	input_info->tsearch = 0;
	input_info->i = 0;
	input_info->x = 0;
	input_info->f = 0;
	input_info->y = 0;
	ft_bzero(input_info->flag, 10);
	input_info->hexswi = 0;
	input_info->cast = 0;
}

void			initialize_it_all(t_passinfo *pass, t_inputinfo *input)
{
	initialize_pass_values(pass);
	initialize_input_values(input);
}
