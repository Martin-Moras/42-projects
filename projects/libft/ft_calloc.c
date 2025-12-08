/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:59:53 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/12/08 14:39:48 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	buffer = malloc(size * nmemb);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, size * nmemb);
	return (buffer);
}
