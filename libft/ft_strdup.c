/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:29:35 by alrodri2          #+#    #+#             */
/*   Updated: 2022/10/13 12:32:55 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;

	out = (char *)malloc((ft_strlen(s1) + 1) * sizeof(const char));
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, ft_strlen(s1) + 1);
	return (out);
}
