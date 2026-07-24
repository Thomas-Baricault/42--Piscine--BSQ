/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:01:23 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 09:15:05 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_str_len(char *str)
{
	int	length;

	if (str == NULL)
		return (0);
	length = 0;
	while (str[length])
		length++;
	return (length);
}
