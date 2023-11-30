/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:53:14 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:05:46 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t len)
{
	size_t		count;
	char		*cpy;

	count = 0;
	cpy = (char *)str;
	while (count < len)
	{
		cpy[count] = '\0';
		count++;
	}
	str = (void *)cpy;
	return (0);
}
