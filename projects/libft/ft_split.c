/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:32:34 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/23 16:29:16 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks if i points to the end of a string in s
int	is_end(char const *s, char c, unsigned int i)
{
	if (s[i] == c || s[i] == '\0')
		return (1);
	return (0);
}

// empty str = null. multiple whitespaces. only whitespaces.
unsigned int	get_amount(char const *s, char c)
{
	unsigned int	amount;
	unsigned int	i;
	int				in_str;

	amount = 0;
	i = 0;
	in_str = 0;
	while (1)
	{
		if (is_end(s, c, i) && in_str)
		{
			amount++;
			in_str = 0;
		}
		else if (s[i] != c)
			in_str = 1;
		if (!s[i])
			break ;
		i++;
	}
	return (amount);
}

void	skip_gap(char const *s, char c, unsigned int *i)
{
	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
}

// assumes that s isn't starting with c
char	*get_next_str(char const *s, char c, unsigned int *i)
{
	char			*out;
	unsigned int	len;
	unsigned int	j;

	len = 0;
	while (!is_end(s, c, *i + len))
		len++;
	out = (char *)malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	j = 0;
	while (j < len)
	{
		out[j] = s[*i];
		j++;
		(*i)++;
	}
	out[len] = '\0';
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char			**out;
	unsigned int	amount;
	unsigned int	s_i;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	amount = get_amount(s, c);
	out = (char **)malloc((amount + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	s_i = 0;
	while (i < amount)
	{
		skip_gap(s, c, &s_i);
		out[i] = get_next_str(s, c, &s_i);
		i++;
	}
	out[amount] = NULL;
	return (out);
}
