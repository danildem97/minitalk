/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:50:33 by ddemydov          #+#    #+#             */
/*   Updated: 2023/04/06 15:57:36 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include "../inc/libft/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

void	sighandler(int sig);
void	creating_char(int b);

#endif