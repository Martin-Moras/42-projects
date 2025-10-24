/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:27:52 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/23 17:59:26 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	unsigned int	i;
	char			*out;

	s_len = ft_strlen(s);
	out = (char *)malloc(s_len + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		out[i] = (*f)(i, s[i]);
		i++;
	}
	out[s_len] = '\0';
	return (out);
}
