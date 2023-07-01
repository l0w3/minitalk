/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:53:02 by alrodri2          #+#    #+#             */
/*   Updated: 2022/09/23 16:42:04 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	ret;

	i = 0;
	ret = (ft_strlen(src));
	if (dstsize <= 0)
		return (ret);
	while (i < (dstsize - 1) && *src != '\0')
	{
		ft_memset(dst, *src, 1);
		++dst;
		++src;
		++i;
	}
	*dst = '\0';
	return (ret);
}
