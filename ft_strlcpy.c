/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:44:44 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/06/24 16:58:17 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen((char *) src);
	if (len == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = (char) src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
