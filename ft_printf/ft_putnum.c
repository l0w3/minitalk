/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:02:58 by alrodri2          #+#    #+#             */
/*   Updated: 2023/07/01 16:35:19 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptn_uns(unsigned int num, char *base, int i, unsigned int baselen)
{
	if (num >= baselen)
	{
		i = ft_ptn_uns(num / baselen, base, i, baselen);
		if (i < 0)
			return (-1);
	}
	i = ft_putchar_pf(base[num % baselen], i);
	if (i < 0)
		return (-1);
	return (i);
}

int	ft_minint(int i)
{
	i = ft_putstr("-2147483648", i);
	if (i < 0)
		return (-1);
	return (i);
}

int	ft_putnum(int num, char *base, int i, int baselen)
{
	if (num == -2147483648)
		i = ft_minint(i);
	else
	{
		if (num < 0)
		{
			i = ft_putchar_pf('-', i);
			num = -num;
			if (i < 0)
				return (-1);
		}
		if (num >= baselen)
		{
			i = ft_putnum(num / baselen, base, i, baselen);
			if (i < 0)
				return (-1);
		}
		i = ft_putchar_pf(base[num % baselen], i);
		if (i < 0)
			return (-1);
	}
	return (i);
}

int	ft_pn_us_lg(unsigned long int num, char *base, int i, unsigned int baselen)
{
	if (num >= baselen)
	{
		i = ft_pn_us_lg(num / baselen, base, i, baselen);
		if (i < 0)
			return (-1);
	}
	i = ft_putchar_pf(base[num % baselen], i);
	if (i < 0)
		return (-1);
	return (i);
}

int	ft_putptr(void *ptr, int i)
{
	i = ft_putstr("0x", i);
	if (i < 0)
		return (-1);
	i = ft_pn_us_lg((unsigned long int)ptr, "0123456789abcdef", i, 16);
	if (i < 0)
		return (-1);
	return (i);
}
/*
int main()
{
	ft_putnum(-190, "0123456789", 0, 10);
}*/
