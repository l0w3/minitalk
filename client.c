/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:08:43 by alrodri2          #+#    #+#             */
/*   Updated: 2023/07/01 16:39:32 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "minitalk.h"

void *send_bits(int pid, char c)
{
    int i;
    int bit_val;

    i = 6;
    bit_val = -1;
    while (i >= 0)
    {
        bit_val = ((1 << i)&c)>0;
        ft_printf("%d\n", bit_val);
        if (bit_val == 1)
		{
            if(kill(pid, SIGUSR1) == -1)
				ft_printf("no connection to server\n");
		}
        else if (bit_val == 0)
		{
            if(kill(pid, SIGUSR2) == -1)
				ft_printf("no connection to server\n");
		}
        i--;
		usleep(100);
    }
	return "done";
}

int main(int argc, char **argv)
{
    int pid;
    char *message;

    if (argc == 3)
    {
        pid = ft_atoi(argv[1]);
        message = argv[2];
        //message = "h";
        while (*message)
        {
            send_bits(pid, *message);
            ++message;
        }
		//send_bits(pid, '\0');
    }
}