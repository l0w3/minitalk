/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:59:16 by alrodri2          #+#    #+#             */
/*   Updated: 2023/07/01 16:36:38 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(int c, int i)
{
	if (write(1, &c, 1) < 0)
		return (-1);
	++i;
	return (i);
}

int	ft_putstr(const char *str, int i)
{
	int	c;

	c = 0;
	if (!str)
		str = "(null)";
	while (str[c])
	{
		i = ft_putchar_pf(str[c], i);
		if (i < 0)
			return (-1);
		++c;
	}
	return (i);
}
