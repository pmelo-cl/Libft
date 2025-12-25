/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-cl <pmelo-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:27:16 by pmelo-cl          #+#    #+#             */
/*   Updated: 2025/10/06 11:26:03 by pmelo-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	size_t				i;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *)ptr;
	while (i < count)
	{
		if (*s == (unsigned char)ch)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}
