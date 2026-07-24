/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tab_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:51:58 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/16 16:14:05 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_str_tab_push(char ***tab, char *str)
{
	int		length;
	char	**temp;

	length = 0;
	while (*tab && (*tab)[length])
		length++;
	temp = malloc(sizeof(char *) * (length + 2));
	if (temp == NULL)
	{
		ft_str_tab_free(tab);
		return (NULL);
	}
	temp[length] = str;
	temp[length + 1] = NULL;
	while (temp && --length >= 0)
		temp[length] = (*tab)[length];
	free(*tab);
	*tab = temp;
	return (temp);
}
