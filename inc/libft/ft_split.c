/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:50:53 by ddemydov          #+#    #+#             */
/*   Updated: 2023/01/31 19:53:17 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordscounter(char const *s, char c)
{
	int	counter;
	int	index;

	index = 0;
	counter = 0;
	while (s[index])
	{
		if (s[index] == c)
		{
			while (s[index] && s[index] == c)
			index++;
		}
		else
		{
			while (s[index] && s[index] != c)
			{
				index++;
			}
			counter++;
		}
	}
	return (counter);
}

char	**ft_get_words(char **words, char const *s, char c, int words_count)
{
	int		counter;
	int		word_lenght;
	int		index;

	counter = 0;
	word_lenght = 0;
	index = 0;
	while (s[index] && counter < words_count)
	{
		while (s[index] && s[index] == c)
			index++;
		while (s[index] && s[index] != c)
		{
			word_lenght++;
			index++;
		}
		words[counter] = ft_substr(s, index - word_lenght, word_lenght);
		word_lenght = 0;
		counter++;
	}
	words[counter] = 0;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		words_nbr;

	if (!s)
		return (0);
	words_nbr = ft_wordscounter(s, c);
	words = malloc(sizeof(char *) * (words_nbr + 1));
	if (!words)
		return (0);
	ft_get_words(words, s, c, words_nbr);
	return (words);
}
