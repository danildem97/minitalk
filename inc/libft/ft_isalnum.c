/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:43:50 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/23 18:04:36 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int num)
{
	if ((num >= 'A' && num <= 'Z')
		|| (num >= 'a' && num <= 'z')
		|| (num >= '0' && num <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
