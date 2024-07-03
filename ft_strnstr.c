/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:10:17 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/06/21 12:04:04 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*temp;
	size_t	i;
	int		j;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (little[j] == big[i])
			temp = (char *)&big[i];
		while (little[j] == big[i])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return (temp);
		}
		i++;
	}
	return (NULL);
}
