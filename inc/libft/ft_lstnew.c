/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:59:18 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/29 17:15:54 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nlist;

	nlist = malloc(sizeof(t_list));
	if (!nlist)
		return (0);
	nlist->content = content;
	nlist->next = 0;
	return (nlist);
}
