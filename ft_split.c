/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:33:09 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/23 18:08:19 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

static int string_length(const char *s, char c)
{
	int	count;

	count = 0;
	while (s[count] && s[count] != c)
			count++;
	return (count);
}

static int word_count(const char *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static void free_all(char **split)
{
	int i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return;
}
/*
static void fill_char(char **split, const char *s, int j, int i, int words)
{
	int start;

	start = 0;
	while (start < words)
	{
		split[j][start] = s[i];
		start++;
		i++;
	}
	split[j][start] = '\0';
	j++;
}
*/
static char	*create_word(const char *s, char c)
{
	char	*word;
	int		len;
	int		i;

	i = 0;
	len = string_length(s, c);
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	allocate_word(const char *s, char c, char **split, int words)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && j < words)
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			split[j] = create_word(s + i, c);
			if (!split[j])
				free_all(split);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
	}
	split[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char **split;
	int	length;

	length = word_count(s, c);
	split = (char **) malloc(sizeof(char *) * (length + 1));
	if (!split)
		return (NULL);
	allocate_word(s, c, split, length);
	return (split);
}
/*
int main(void)
{
	const char *s = "lucas$rossi";
	char c = '$';
	char **split = ft_split(s, c);
	if (!split)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	int i = 0;
	while (split[i])
	{
		printf("String %s\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}
*/
//#include <stdio.h>
//#include <stdlib.h>
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
