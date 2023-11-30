/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:23:22 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:34 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	char	*answer;
	int		count;

	answer = (char *) str;
	count = 0;
	while (answer[count] != '\0')
	{
		if (answer[count] == (unsigned char)to_find)
		{
			return (&answer[count]);
		}
	count++;
	}
	if (answer[count] == (unsigned char)to_find)
		return (&answer[count]);
	return (0);
}
