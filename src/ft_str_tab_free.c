/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tab_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:51:28 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/16 15:16:41 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_str_tab_free(char ***tab)
{
	char	**ptr;

	ptr = *tab;
	while (ptr && *ptr)
		free(*ptr++);
	free(*tab);
	*tab = NULL;
	return ;
}
