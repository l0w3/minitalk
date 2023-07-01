/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:26:43 by alrodri2          #+#    #+#             */
/*   Updated: 2022/10/13 16:25:06 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_starttrim(const char *s, const char *set)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ft_strlen(set) == 0)
		return (0);
	while (s[j] != '\0' && ft_strlen(set) > i)
	{
		i = 0;
		while (ft_memcmp(&s[j], &((const void *)set)[i], 1) && set[i] != '\0')
			++i;
		++j;
	}
	if (s[j] == '\0')
		return (-1);
	return (j - 1);
}

char	*nonestring(void)
{
	char	*string;

	string = malloc(sizeof(char));
	if (!string)
		return (NULL);
	string[0] = 0;
	return (string);
}

char	*ft_strtrim(const char *s, const char *set)
{
	int		i;
	int		j;
	int		k;
	char	*string;

	j = 0;
	k = 0;
	i = 0;
	while (j <= ft_strlen(s))
	{
		i = 0;
		while (ft_memcmp(&s[ft_strlen(s) - j], &((const void *)set)[i], 1)
				&& ft_strlen(set) > i)
			++i;
		if (ft_memcmp(&s[ft_strlen(s) - j], &((const void *)set)[i], 1) == 0)
			++k;
		else if (ft_strlen(set) <= i)
			break ;
		++j;
	}
	if (ft_starttrim(s, set) == -1)
		return (nonestring());
	string = NULL;
	return (ft_substr(s, ft_starttrim(s, set),
			(ft_strlen(s) - k - ft_starttrim(s, set) + 1)));
}
