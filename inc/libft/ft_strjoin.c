/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:30:46 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/25 14:01:14 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answer;
	size_t	indexs1;
	size_t	indexs2;

	answer = (char *)malloc(ft_strlen(s1)+ft_strlen(s2)+1);
	if (answer == NULL)
		return (NULL);
	indexs1 = 0;
	indexs2 = 0;
	while (s1[indexs1])
	{
	answer[indexs1] = s1[indexs1];
	indexs1++;
	}
	while (s2[indexs2])
	{
	answer[indexs1] = s2[indexs2];
	indexs1++;
	indexs2++;
	}
	answer[indexs1] = 0;
	return (answer);
}
