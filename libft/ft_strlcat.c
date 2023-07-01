/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:21:14 by alrodri2          #+#    #+#             */
/*   Updated: 2022/10/13 11:04:01 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	ret;

	i = ft_strlen(dst);
	ret = i + ft_strlen(src);
	dst += i;
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize - 1 < i)
		return (ft_strlen(src) + dstsize);
	while ((dstsize - i - 1) > 0 && (*src != '\0'))
	{
		ft_memset(dst, *src, 1);
		--dstsize;
		++src;
		++dst;
	}
	*dst = '\0';
	return (ret);
}
