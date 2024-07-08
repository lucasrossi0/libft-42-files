/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:27:27 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/08 16:17:23 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>

static int	count_characters(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	convert_intstr(int counter, int i, char c, char *res, int n)
{
	if (n < 0)
	{
		res[i] = '-';
		n *= -1;
		i++;
		counter--;
	}
	if (n < 9)
	{
		c = n + '0';
		res[i] = c;
		i++;
	}
	if (n > 9)
	{
		while (counter > 0)
		{
			c = (n % 10) + '0';
			res[counter] = c;
			counter--;
			n = n / 10;
			i++;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	char	c;
	int		counter;
	int		i;

	counter = count_characters(n);
	res = (char *) malloc(sizeof(char) * counter + 1);
	if (!res)
		return (NULL);
	i = 0;
	c = '\0';
	convert_intstr(counter, i, c, res, n);
	res[i] = '\0';
	return (res);
}
*/
/*
#include <stdlib.h>
#include <stdio.h>

static int	count_characters(int n)
{
	int	count;

	count = 1;
	while (n >= 1)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		counter;
	int     i;

	counter = count_characters(n);
	i = counter;
	res = (char *) malloc(sizeof(char) * counter + 1);
	if (!res)
		return (NULL);
	res[i + 1] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	//	counter--;
	}
	printf("res %s\n", res);
	while (counter)
	{
		res[counter] = ((n % 10) + '0');
		n /= 10;
		counter--;
	}
	printf("res %s\n", res);
	return (res);
}
*/
/*
int main(void)
{
    int a = -42;
    printf("Test %s\n", ft_itoa(a));
    return (0);
}
*/

#include <stdlib.h>

static int	count(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
		c++;
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		counter;
	int		n_mod;

	n_mod = n;
	counter = count(n);
	res = (char *) malloc(sizeof(char) * (counter + 1));
	if (!res)
		return (NULL);
	res[counter] = '\0';
	if (n_mod < 0)
	{
		res[0] = '-';
		n_mod *= -1;
	}
	while (--counter > 0)
	{
		res[counter] = ((n_mod % 10) + '0');
		n_mod /= 10;
	}
	return (res);
}
