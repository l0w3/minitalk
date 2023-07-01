/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:16:25 by alrodri2          #+#    #+#             */
/*   Updated: 2022/10/13 11:04:36 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!string)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		++i;
	}
	string[i] = '\0';
	return (string);
}
