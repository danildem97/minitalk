/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:34:34 by ddemydov          #+#    #+#             */
/*   Updated: 2023/02/03 19:16:26 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	char	*answer;
	int		count;

	answer = (char *) str;
	count = ft_strlen(str);
	while (count >= 0)
	{
		if (answer[count] == (char )to_find)
		{
			return (&answer[count]);
		}
	count--;
	}
	return (0);
}
