/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:15 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:37 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t		count;
	char		*srccpy;
	char		*destcpy;

	if (!dest && !src)
		return (0);
	count = 0;
	srccpy = (char *)src;
	destcpy = (char *)dest;
	while (count < len)
	{
		destcpy[count] = srccpy[count];
		count++;
	}
	return (dest);
}
