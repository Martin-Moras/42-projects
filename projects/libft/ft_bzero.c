/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:49:47 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/18 20:20:48 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_char;
	size_t			i;

	i = 0;
	s_char = (unsigned char *)s;
	while (i < n)
	{
		s_char[i] = '\0';
		i++;
	}
}
