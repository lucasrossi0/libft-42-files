/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:04:57 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/09 17:05:25 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
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
*/

#include <stdio.h>
#include <stdlib.h>
/*
static int	ammount_str(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			counter++;
		}
		i++;
	}
	return (counter);
}
*/

static int	count_words(const char *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			counter++;
			while (s[i] && s[i] != c)
				i++
		}
		i++;
	}
	return (counter);
}

static void		copy_chars(char *split, const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		split[i] = s[i];
		i++;
	}
	split[i] = '\0';
}

static void create_arr(const char *s, char **split, char c)
{
	int index;
	int count;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i])
			index++;
		if (s[index + 1] == c && s[index + 1] == '\0')
		{
			

}

char **ft_split(const char *s, char c)
{
	char **split;
	int	count;

	count = count_words(s, c);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	create_arr(s, split, c);
	return (split);
}
/*
char **ft_split(const char *s, char c)
{
	char **split = 0;
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	split = (char **) calloc(2, sizeof(char));
	if (!split)
		return (NULL);
	while (s[x] != '\0')
	{
		if (s[x] != c)
		{
			split[i][j] = *s;
			j++;
		}
		if (s[x] == c)
		{
			i++;
			j = 0;
		}
		x++;
	}
	return (split);
}
*/
