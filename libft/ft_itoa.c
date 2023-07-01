/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:55:15 by alrodri2          #+#    #+#             */
/*   Updated: 2022/10/13 16:23:43 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*minint(void)
{
	char	*min;
	int		i;
	char	*string;

	min = "-2147483648";
	string = (char *)malloc(sizeof(char) * 12);
	if (!string)
		return (NULL);
	i = 0;
	while (i < 12)
	{
		string[i] = min[i];
		++i;
	}
	string[11] = '\0';
	return (string);
}

char	*ft_putnbr(int nb, char *string, int len)
{
	if (nb < 0)
	{
		string[0] = '-';
		nb = -(nb);
	}
	if (nb > 0)
		ft_putnbr(nb / 10, string, --len);
	string[len] = nb % 10 + '0';
	string[len + 1] = '\0';
	return (string);
}

int	numberlen(int n)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n / 10 > 0)
	{
		++i;
		n /= 10;
	}
	if (neg == 1)
		return (i + 1);
	return (i);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len;

	len = numberlen(n) + 1;
	if (n == 0)
	{
		string = (char *)malloc(sizeof(char) * 2);
		if (!string)
			return (NULL);
		string[0] = '0';
		string[1] = '\0';
		return (string);
	}
	else if (n != -2147483648)
		string = (char *)malloc(sizeof(char) * len + 1);
	else
		return (minint());
	if (!string)
		return (NULL);
	string = ft_putnbr(n, string, len);
	if (n == 0)
		return (string + 1);
	return (string);
}
