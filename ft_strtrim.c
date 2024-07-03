/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:18:49 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/02 10:02:54 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rec;
	int		total_len;
	int		i;
	int		j;
	
	total_len = ft_strlen((char *) s1);
	if (total_len <= 0)
		return (NULL);
	rec = (char *) malloc(sizeof(char) * total_len);
	if (!rec)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] == set[j])
		{
			i++;
			j++;
		}
		rec[i] = s1[i];
		i++;
	}
	return (rec);
}
*/
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int		total_len;
	int		i;
	int		j;
	char	*trim;
	int 	s1_len;

	total_len = ft_strlen(s1) - ft_strlen(set);
	if (total_len < 0)
		return (0);
	trim = (char *) malloc(sizeof(char) * total_len);
	if (!trim)
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (i < s1_len)
		{
			if (s1[i] == set[j])
			{
				i++;
				j++;
			}
			trim[i] = s1[i];
			i++;
			j++;
		}
		i++;
	}
	return (trim);
}


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t i;

	if (!dst || !src)
		return (0);
	srcsize = strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
*/
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	int		last;
	char	*trim;

	first = 0;
	while (strchr(set, s1[first]))
		first++;
	printf("First %d\n", first);
	last = first;
	while (strchr(set, s1[last]))
		last--;
	printf("Last %d\n", last);
	trim = (char *) malloc(sizeof(char) * (last - first));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + first, last - first);
	trim[last - first] = '\0';
	return (trim);
}
*/
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[end - 1]))
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
