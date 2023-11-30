/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:05:04 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/24 18:15:04 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*answer;
	size_t	count;
	char	letter;

	answer = (char *)str;
	letter = c;
	count = 0;
	while (count < n)
	{
		if (answer[0] == letter)
		{
			return (answer);
		}
	count++;
	answer++;
	}
	return (0);
}
