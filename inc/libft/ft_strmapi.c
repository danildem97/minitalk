/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:09:14 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/31 13:32:01 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	count;
	char	*answer;

	count = 0;
	if (!s || !f)
		return (0);
	answer = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!answer)
		return (0);
	while (s[count])
	{
		answer[count] = f(count, s[count]);
		count++;
	}
	answer[count] = '\0';
	return (answer);
}
