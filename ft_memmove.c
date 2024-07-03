/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:23:38 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/06/26 11:14:56 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_arr;
	size_t	i;
	const char	*src_char;
	char	*dest_char;

	i = 0;
	temp_arr = NULL;
	src_char = (const char *) src;
	dest_char = (char *) dest;
	while (i < n)
	{
		temp_arr[i] = src_char[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_char[i] = temp_arr[i];
		i++;
	}
	return (dest);
}
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src_char;
	char		*dest_char;
	size_t		i;

	src_char = (const char *) src;
	dest_char = (char *) dest;
	if (dest_char < src_char)
	{
		i = 0;
		while (i < n)
		{
			dest_char[i] = src_char[i];
			i++;
		}
	}
	else if (dest_char > src_char)
	{
		i = n;
		while (i > 0)
		{
			dest_char[i] = src_char[i];
			i--;
		}
	}
	return (dest);
}
