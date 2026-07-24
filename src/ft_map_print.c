/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:58:46 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/16 18:42:48 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_map_print(t_map map)
{
	int	y;

	y = -1;
	while (++y < map.height)
	{
		ft_str_print(1, map.data[y]);
		ft_str_print(1, "\n");
	}
	return ;
}
