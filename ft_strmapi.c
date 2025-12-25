/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-cl <pmelo-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:36:57 by pmelo-cl          #+#    #+#             */
/*   Updated: 2025/10/10 11:33:40 by pmelo-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;
	size_t			size;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	out = (char *)malloc((size + 1) * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
