/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:11:14 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/24 20:11:21 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	s_len;
	int		cpy_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((size_t)start >= s_len)
		return (ft_strdup(""));
	cpy_len = len + 1;
	if (len > s_len - (size_t)start)
		cpy_len = s_len - start + 1;
	out = (char *)ft_calloc(cpy_len, sizeof(char));
	if (out == NULL)
		return (NULL);
	ft_strlcpy(out, s + start, cpy_len);
	return (out);
}
