/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_files.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:12:11 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/16 18:42:44 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_run_files(char **files)
{
	int	i;

	i = 0;
	while (files[i])
	{
		if (i > 0)
			ft_str_print(1, "\n");
		ft_run_file(files[i++]);
	}
	return ;
}
