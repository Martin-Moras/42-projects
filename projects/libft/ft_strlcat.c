/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:58:30 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/18 15:26:48 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_i;
	size_t	src_i;
	size_t	dst_len;
	size_t	src_len;

	src_i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_i = dst_len;
	if (size <= dst_len)
		return (size + src_len);
	while (src[src_i] && dst_i + 1 < size)
		dst[dst_i++] = src[src_i++];
	dst[dst_i] = '\0';
	return (dst_len + src_len);
}
