/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:07:23 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:29 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t		i;
	size_t		count;

	count = 0;
	i = 0;
	if (!*to_find)
		return (str);
	while (*str && count < len)
	{
		if (*str == *to_find)
		{
			i = 0;
			while (str[i] && to_find[i] && count + i < len)
			{
				if (str[i] != to_find[i])
					break ;
				i++;
			}
			if (to_find[i] == '\0')
				return (str);
		}
		str += 1;
		count++;
	}
	return (0);
}
