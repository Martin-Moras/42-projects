/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:32:11 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/22 00:43:21 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_cp;
	int		s_len;

	s_len = ft_strlen(s) + 1;
	s_cp = (char *)malloc(s_len);
	if (s_cp == NULL)
		return (NULL);
	ft_strlcpy(s_cp, s, s_len);
	return (s_cp);
}
