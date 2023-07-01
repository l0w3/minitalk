/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:10:29 by alrodri2          #+#    #+#             */
/*   Updated: 2022/09/22 16:36:47 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;

	pos = s;
	while (*s != '\0')
	{
		if (*s == (char )c)
			pos = s;
		++s;
	}
	if ((char )c == '\0')
		return ((char *)s);
	else if (*pos != (char )c)
		return ((char *)0);
	return ((char *)pos);
}
