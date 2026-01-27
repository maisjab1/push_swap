/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:58:25 by mjabarin          #+#    #+#             */
/*   Updated: 2025/12/13 14:15:28 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*get_word(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *) malloc (sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	arr = (char **) malloc (sizeof(char *) * (count_words(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	i = 0 ;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			arr[j] = get_word(&s[i], c);
			if (!arr[j])
				return (NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	arr[j] = NULL;
	return (arr);
}
