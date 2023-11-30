/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:11:12 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/31 13:36:12 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*answer;
	int			len;
	long		nb;

	nb = n;
	len = nlen(n);
	answer = malloc(sizeof(char) * (len + 1));
	if (!answer)
		return (0);
	if (n < 0)
	{
		answer[0] = '-';
		nb = -nb;
	}
	if (n == 0)
		answer[0] = '0';
	answer[len] = '\0';
	len--;
	while (nb)
	{
		answer[len] = nb % 10 + 48;
		len--;
		nb = nb / 10;
	}
	return (answer);
}
