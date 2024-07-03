/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:26:43 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/02 14:28:41 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len_s;
	char 			*res;
	unsigned int	i;

	len_s = ft_strlen((char *) s);
	res = (char *) malloc (sizeof(char) * (len_s + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
