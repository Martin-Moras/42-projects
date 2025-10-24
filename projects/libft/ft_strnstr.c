/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:17:50 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/18 17:57:27 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (1)
		{
			if (little[j] == '\0')
				return ((char *)big + i);
			if (big[i + j] == '\0' || i + j == len)
				return (NULL);
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		i++;
	}
	return (NULL);
}
