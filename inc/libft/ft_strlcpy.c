/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:53:49 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:32 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	count;
	int				lenght;

	count = 0;
	lenght = 0;
	while (src [lenght] != '\0' )
	{
		lenght++;
	}
	if (size > 0)
	{
		while (src[count] != '\0' && count < size - 1)
		{
			dest [count] = src[count];
			count++;
		}
		dest [count] = '\0';
	}
	return (lenght);
}
