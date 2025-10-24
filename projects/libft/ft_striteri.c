/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:27:52 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/23 18:05:16 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		(*f)(i, s + i);
		i++;
	}
}
