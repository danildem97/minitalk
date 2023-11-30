/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:37:39 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:33 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == 0)
		return (0);
	ft_memcpy(dest, src, len);
	return (dest);
}
