/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:17:32 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:39 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int			count;
	unsigned char			*s1cpy;
	unsigned char			*s2cpy;

	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	count = 0;
	while (count < n)
	{
		if (s1cpy[count] != s2cpy[count])
			return (s1cpy[count] - s2cpy[count]);
		count++;
	}
	if (count != n)
	{
		return (s1cpy[count] - s2cpy[count]);
	}
	return (0);
}
