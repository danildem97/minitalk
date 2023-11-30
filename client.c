/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:31:08 by ddemydov          #+#    #+#             */
/*   Updated: 2023/04/06 16:00:31 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/client.h"

static	void	send_char(int pid, char c)
{
	int		index;
	char	temp;

	index = 0;
	temp = c;
	while (index < 8)
	{
		if ((temp & 1) == 1)
		{
			kill(pid, SIGUSR1);
			usleep(50);
		}
		if ((temp & 1) == 0)
		{
			kill(pid, SIGUSR2);
			usleep(50);
		}
		temp = temp >> 1;
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int		pid;
	char	*string;
	int		i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		string = argv[2];
		if (kill(pid, 0) != 0)
		{
			write(1, "Wrong PID.\n", 11);
			return (0);
		}
		while (string[i])
		{
			send_char(pid, string[i]);
			i++;
		}
	}
	else
	{
		write(1, "Invalid input.\n", 15);
	}
	return (0);
}
