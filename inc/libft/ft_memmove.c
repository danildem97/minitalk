/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:49:06 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:37 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				count;
	unsigned char		*srccpy;
	unsigned char		*destcpy;

	count = 0;
	srccpy = (unsigned char *)src;
	destcpy = dest;
	if (dest < src)
	{
		return (ft_memcpy(dest, src, len));
	}
	if (dest > src)
	{
		while (len--)
		{
			destcpy[len] = srccpy[len];
		}
	}
	return (dest);
}
