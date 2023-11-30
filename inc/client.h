/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:48:56 by ddemydov          #+#    #+#             */
/*   Updated: 2023/04/06 15:50:18 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include "../inc/libft/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

static void	send_char(int pid, char c);

#endif