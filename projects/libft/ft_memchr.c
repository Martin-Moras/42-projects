/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:38:42 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/18 17:21:39 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_c;
	unsigned char	c_c;

	s_c = (unsigned char *)s;
	c_c = (unsigned char )c;
	i = 0;
	while (i < n)
		if (s_c[i++] == c_c)
			return ((char *)s + i - 1);
	return (NULL);
}
