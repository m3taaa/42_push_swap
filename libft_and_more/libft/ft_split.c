/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:39:09 by mmeerber          #+#    #+#             */
/*   Updated: 2023/05/21 14:00:02 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static	void	free_tab_2d(char **res)
{
	int	x;

	x = 0;
	while (res[x])
	{
		free(res[x]);
		x++;
	}
	free(res);
}

static	int	count_words(char const *s, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (s[x] != '\0')
	{
		while (s[x] == c)
			x++;
		if (s[x] != '\0')
			count++;
		while (s[x] != c && s[x] != '\0')
			x++;
	}
	return (count);
}

static	int	create_new_list(char const *s, char c, char **res, int word)
{
	int	x;
	int	i;
	int	start;
	int	new_word;

	new_word = 0;
	x = 0;
	while (new_word < word)
	{
		while (s[x] == c)
			x++;
		start = x;
		while (s[x] != c && s[x] != '\0')
			x++;
		res[new_word] = ft_substr(s, start, x - start);
		if (!res[new_word])
		{
			i = 0;
			while (i < new_word)
			{
				free(res[i]);
				i++;
			}
			return (0);
		}
		new_word++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		nb_words;
	char	**res;
	int		result;

	nb_words = 0;
	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	res = malloc(sizeof(char *) * (nb_words + 1));
	if (!res)
		return (NULL);
	result = create_new_list(s, c, res, nb_words);
	if (result == 0)
	{
		free_tab_2d(res);
		return (NULL);
	}
	res[nb_words] = NULL;
	return (res);
}*/
static int		ft_hm(char const *s, char c)
{
	size_t	nbr;
	int		i;

	nbr = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (i > 0 && s[i] && s[i - 1] == c)
			nbr++;
		if (s[i])
			i++;
	}
	if (nbr == 0 && s[i - 1] == c)
		return (0);
	if (s[0] != c)
		nbr++;
	return (nbr);
}

static char		**ft_mal(char **strs, char const *s, char c)
{
	size_t	count;
	int		i;
	int		h;

	count = 0;
	i = 0;
	h = 0;
	while (s[h])
	{
		if (s[h] != c)
			count++;
		else if (h > 0 && s[h - 1] != c)
		{
			strs[i] = malloc(sizeof(char) * (count + 1));
			if (!strs[i])
				return (0);
			count = 0;
			i++;
		}
		if (s[h + 1] == '\0' && s[h] != c)
			if (!(strs[i] = malloc(sizeof(char) * count + 1)))
				return (0);
		h++;
	}
	return (strs);
}

static char		**ft_cpy(char **strs, char const *s, char c)
{
	int i;
	int j;
	int h;

	i = 0;
	j = 0;
	h = 0;
	while (s[h])
	{
		if (s[h] != c)
			strs[i][j++] = s[h];
		else if (h > 0 && s[h - 1] != c)
			if (h != 0)
			{
				strs[i][j] = '\0';
				j = 0;
				i++;
			}
		if (s[h + 1] == '\0' && s[h] != c)
			strs[i][j] = '\0';
		h++;
	}
	return (strs);
}

char			**ft_split(char const *s, char c)
{
	char	**rtn;
	int		nbr_w;

	if (!s || !*s)
	{
		if (!(rtn = malloc(sizeof(char *) * 1)))
			return (NULL);
		*rtn = (void *)0;
		return (rtn);
	}
	nbr_w = ft_hm(s, c);
	rtn = malloc(sizeof(char *) * (nbr_w + 1));
	if (!rtn)
		return (0);
	if (ft_mal(rtn, s, c) != 0)
		ft_cpy(rtn, s, c);
	else
	{
		free(rtn);
		return (NULL);
	}
	rtn[nbr_w] = (void *)0;
	return (rtn);
}
