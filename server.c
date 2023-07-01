/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:12:53 by dacortes          #+#    #+#             */
/*   Updated: 2023/07/01 16:39:24 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./minitalk.h"

void	handle(int sig)
{
	static int bit = 0;
	static int	c = 0;
	
	c <<= 1;
	if (sig == SIGUSR1)
	{
		//printf("%d\n", 1);
		c |= 1;
	}
	//else
	//	printf("%d\n", 0);
	bit++;
	if (bit == 7	)
	{
		ft_printf("%c", c);
		bit = 0;
		c = 0;
	}
}

void cont(void)
{
	struct sigaction sa;

	sa.sa_handler = handle;
	sa.sa_flags = SA_RESTART;

	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
}
int main()
{
	int	pid;

	pid = getpid();
	if (!pid)
		ft_printf("NO PID");
	else
		ft_printf("Your PID is %d\n", pid);
	cont();
	while (1)
		pause();
	return (0);

}