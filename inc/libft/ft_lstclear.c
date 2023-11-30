/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:26:46 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/30 15:51:40 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lstcpy;

	while (*lst)
	{
		lstcpy = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lstcpy;
	}
}
