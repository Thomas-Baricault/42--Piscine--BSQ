/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:40:20 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 10:52:47 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_run_file(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_str_print(2, "map error\n");
		return ;
	}
	ft_run_map(fd);
	close(fd);
	return ;
}
