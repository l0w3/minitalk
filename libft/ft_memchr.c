/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:06:50 by alrodri2          #+#    #+#             */
/*   Updated: 2022/10/13 14:19:53 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n != 0 && n -1 > i
		&& (unsigned char)c != ((const unsigned char *)s)[i])
		++i;
	if ((n == 0 || n -1 == i)
		&& (unsigned char)c != ((const unsigned char *)s)[i])
		return (NULL);
	if (n == 0 && c == 0)
		return (NULL);
	return (&((void *)s)[i]);
}
