/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:12:33 by ddemydov          #+#    #+#             */
/*   Updated: 2023/04/06 16:00:23 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/server.h"

void	creating_char(int b)
{
	static char	letter;
	static int	index;

	if (index < 8)
	{
		letter += (b << index);
		index++;
	}
	if (index == 8)
	{
		write(1, &letter, 1);
		index = 0;
		letter = 0;
	}
}

void	sighandler(int sig)
{
	if (sig == SIGUSR2)
	{
		creating_char(0);
	}
	else if (sig == SIGUSR1)
	{
		creating_char(1);
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	write(1, ft_itoa(pid), 5);
	write(1, "\n", 1);
	signal(SIGUSR1, sighandler);
	signal(SIGUSR2, sighandler);
	while (1)
	{
		sleep(1);
	}
	return (0);
}
