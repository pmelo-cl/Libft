/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-cl <pmelo-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:56:26 by pmelo-cl          #+#    #+#             */
/*   Updated: 2025/10/10 10:33:33 by pmelo-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*strjoined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	strjoined = (char *)malloc((size + 1) * sizeof(char));
	if (!strjoined)
		return (NULL);
	ft_strlcpy(strjoined, s1, size + 1);
	ft_strlcat(strjoined, s2, size + 1);
	return (strjoined);
}
