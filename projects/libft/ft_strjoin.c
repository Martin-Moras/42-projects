/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:48:25 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/21 21:16:33 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;
	char			*out;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2) + 1;
	out = (char *)ft_calloc(s1_len + s2_len, sizeof(char const));
	if (!out)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		out[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		out[i] = s2[i - s1_len];
		i++;
	}
	return (out);
}
