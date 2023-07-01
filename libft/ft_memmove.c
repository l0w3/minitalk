/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:34:03 by alrodri2          #+#    #+#             */
/*   Updated: 2022/10/13 16:13:21 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	if (src == (void *)0 && dst == (void *)0)
		return (0);
	if ((size_t)dst - (size_t)src > len)
		ft_memcpy(dst, src, len);
	else
	{
		a = (unsigned char *)dst;
		b = (unsigned char *)src;
		while (i < len)
		{
			a[len - i - 1] = b[len - i - 1];
			++i;
		}
	}
	return (dst);
}
