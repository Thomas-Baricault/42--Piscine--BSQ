/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:40:27 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/17 09:42:11 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_check_square(t_map map, t_square square)
{
	int	x;
	int	y;

	y = square.y - 1;
	while (++y < square.y + square.size)
	{
		x = square.x - 1;
		while (++x < square.x + square.size)
			if (x >= map.width || y >= map.height
				|| map.data[y][x] == map.c_obstacle)
				return (0);
	}
	return (1);
}

t_square	ft_find_square(t_map map)
{
	t_square	found;
	t_square	square;

	found.size = 0;
	square.y = -1;
	while (++square.y < map.height)
	{
		square.x = -1;
		while (++square.x < map.width)
		{
			square.size = 1;
			while (ft_check_square(map, square))
				square.size++;
			if (--square.size > 0 && square.size > found.size)
				found = square;
		}
	}
	return (found);
}
