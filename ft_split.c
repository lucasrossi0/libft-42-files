/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:04:57 by lrossi-u          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/19 19:01:57 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int string_length(const char *s, char c)
=======
/*   Updated: 2024/07/09 17:05:25 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
char	**ft_split(char const *s, char c)
>>>>>>> 025f9a3ba3ab4d8117c0b09c5054e1a4780a6237
{
	int	count;
	int i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int word_count(const char *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (count);
		i++;
		count++;
	}
	return (count);
}

static void fill_char(char *split, const char *s, int count, int i)
{
	while (i < count)
	{
		split[i] = s[i];
		i++;
	}
	split[i] = '\0';
}

static void free_all(char **split)
{
	int i;

	i = 0;
<<<<<<< HEAD
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return;
}

char	**ft_split(char const *s, char c)
{
	char **split;
	int length;
	int i;
	int j;
	int words;

	length = string_length(s, c);
	split = (char **) malloc(sizeof(char) * (length + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (i < length)
	{
		words = word_count(s + i, c);
		split[j] = (char *) malloc(sizeof(char) * (words + 1));
		if (!split[j])
			free_all(split);
		fill_char(split[j], s, words, i);
		j++;
		i++;
	}
	split[i] = '\0';
	return (split);
}

=======
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
>>>>>>> 025f9a3ba3ab4d8117c0b09c5054e1a4780a6237
