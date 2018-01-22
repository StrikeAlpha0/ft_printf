/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_specs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:42:12 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/19 14:38:09 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		search_specs(char search, va_list *list, const char *format, t_inputinfo *info, t_passinfo *pass)
{
	returntop = 0

	while(info->serach != g_spec_table[info->w].name && g_spec_table[info->w].name != '\0')
		info->w++;
	if (info->search == g_spec_table[info->w].name)
	{
		g_spec_table[info->w].function(list, info, pass);
		info->i++;
	}
	else if (search >= '1' && search <='9')
	{
		pass->width = ft_atoi(&format[info->i + x]);
		while ((*(format + info->i)) >= '0' && (*(format + info->i)) <= '9')
			info->i++;
		returntop = 1
	}
	else
		info->flag[info->f] = format[info->i + x];
	if returntop == 1
		search_specs(search, list, format, info, pass);
}
