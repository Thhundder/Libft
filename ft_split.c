/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Evan <Evan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:43:39 by Evan              #+#    #+#             */
/*   Updated: 2025/03/04 16:48:09 by Evan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(const char *str, char delim)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delim && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delim)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*malloc_word(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_all(char **tab, int i)
{
	while (i >= 0)
		free(tab[i--]);
	free(tab);
}

static const char	*get_next_word(const char *str, char delim, size_t *len)
{
	while (*str && *str == delim)
		str++;
	if (!*str)
		return (NULL);
	*len = 0;
	while (str[*len] && str[*len] != delim)
		(*len)++;
	return (str);
}

char	**ft_split(const char *str, char delim)
{
	char		**tab;
	int			words;
	int			i;
	size_t		len;
	const char	*word_start;

	if (!str)
		return (NULL);
	words = count_words(str, delim);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	word_start = get_next_word(str, delim, &len);
	while (word_start)
	{
		tab[i] = malloc_word(word_start, len);
		if (!tab[i])
			return (free_all(tab, i - 1), NULL);
		i++;
		str = word_start + len;
		word_start = get_next_word(str, delim, &len);
	}
	tab[i] = NULL;
	return (tab);
}
