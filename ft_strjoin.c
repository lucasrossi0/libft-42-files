/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:17:29 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/06/28 12:44:04 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len_s1;
	int		len_s2;
	int		i;
	int		j;

	len_s1 = ft_strlen((char *) s1);
	len_s2 = ft_strlen((char *) s2);
	res = (char *) malloc(sizeof(char) * (len_s1 + len_s2));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_s2)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len_s1;
	int		len_s2;

	len_s1 = ft_strlen((char *) s1);
	len_s2 = ft_strlen((char *) s2);
	res = (char *) malloc(sizeof(char) * (len_s1 + len_s2));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, len_s1);
	ft_memcpy(res + len_s1, s2, len_s2);
	return (res);
}
