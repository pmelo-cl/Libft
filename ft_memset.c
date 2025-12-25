/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-cl <pmelo-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:36:34 by pmelo-cl          #+#    #+#             */
/*   Updated: 2025/10/06 11:26:15 by pmelo-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch;

	s = (unsigned char *)str;
	ch = (unsigned char)c;
	while (n-- > 0)
		*s++ = ch;
	return (str);
}
