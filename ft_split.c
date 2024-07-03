/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:04:57 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/02 11:59:18 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	char **res;
	int i = 0;
	int j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			//i++;
			j++;
		}
		i++;
	}
	return (res);
}

static int	array_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i]
