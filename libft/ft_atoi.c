/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:26:32 by alrodri2          #+#    #+#             */
/*   Updated: 2022/09/23 12:31:29 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	power(int base, int exponent, int sign)
{
	int	res;

	res = 1 * (sign);
	while (exponent > 0)
	{
		res *= base;
		--exponent;
	}
	return (res);
}

int	numlen(const char *str)
{
	int	lens;

	lens = 0;
	while (ft_isdigit(*str))
	{
		++lens;
		++str;
	}
	str -= lens;
	return (lens);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	len;
	int	sign;

	res = 0;
	sign = 1;
	len = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		++str;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	len = numlen(str);
	while (len > 0)
	{
		res += (*str % 48) * power(10, --len, sign);
		++str;
	}
	return (res);
}
