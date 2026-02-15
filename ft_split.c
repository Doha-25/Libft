/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbani-ya <dbani-ya@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:04:53 by dbani-ya          #+#    #+#             */
/*   Updated: 2025/12/31 14:21:53 by dbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **arr, int j)
{
	while (j > 0)
	{
		free(arr[j - 1]);
		j--;
	}
	free(arr);
}

static int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*dup_word(const char *s, char c)
{
	int		i;
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc((len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	j = 0;
	new = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!new)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			new[j] = dup_word(&s[i], c);
			if (!new[j])
				return (free_split(new, j), NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	new[j] = NULL;
	return (new);
}
