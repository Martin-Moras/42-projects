/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:19:34 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/15 21:49:23 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_c;
	char	*src_cpy;

	src_cpy = malloc(n);
	ft_memcpy(src_cpy, src, n);
	dest_c = (char *)dest;
	i = 0;
	while (i < n)
	{
		dest_c[i] = src_cpy[i];
		i++;
	}
	free(src_cpy);
	return (dest);
}
