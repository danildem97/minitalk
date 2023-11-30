/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:33:03 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:36 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int i, size_t len)
{
	size_t			count;
	unsigned char	*cpy;

	count = 0;
	cpy = (unsigned char *)str;
	while (count < len)
	{
		cpy[count] = i;
		count++;
	}
	str = (void *)cpy;
	return (str);
}
