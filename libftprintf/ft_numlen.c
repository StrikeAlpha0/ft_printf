/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:33:29 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/21 15:09:55 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_numlen(long nbr)
{
	int w;

	w = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		w++;
	}
	return (w);
}
