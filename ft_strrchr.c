/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-cl <pmelo-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:02:35 by pmelo-cl          #+#    #+#             */
/*   Updated: 2025/10/06 11:26:51 by pmelo-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (char)chr)
			last_occurrence = str;
		str++;
	}
	if ((char)chr == '\0')
		return ((char *)str);
	return ((char *)last_occurrence);
}
