/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:54:19 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/06/20 13:52:30 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*location;
	int		i;

	i = 0;
	location = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			location = (char *) &s[i];
		}
		i++;
	}
	if (*s == '\0')
		return ((char *) s);
	return (location);
}
