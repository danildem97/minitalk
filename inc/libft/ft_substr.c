/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:47:58 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/31 14:31:16 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t end)
{
	char			*answer;
	size_t			aindex;
	size_t			count;

	aindex = 0;
	count = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < end)
		end = ft_strlen(s);
	answer = (char *)malloc(sizeof(char) * (end + 1));
	if (!answer)
		return (0);
	while (s[count])
	{
		if (count >= start && aindex < end)
		{
			answer[aindex] = s[count];
			aindex++;
		}
		count++;
	}
	answer[aindex] = '\0';
	return (answer);
}
