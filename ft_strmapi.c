/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:26:43 by lrossi-u          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/19 18:39:42 by lrossi-u         ###   ########.fr       */
=======
/*   Updated: 2024/07/04 16:26:11 by lrossi-u         ###   ########.fr       */
>>>>>>> 025f9a3ba3ab4d8117c0b09c5054e1a4780a6237
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len_s;
	char 			*res;
	unsigned int	i;

	len_s = ft_strlen((char *) s);
	res = (char *) malloc (sizeof(char) * (len_s + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = (f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
