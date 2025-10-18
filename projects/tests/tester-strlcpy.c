/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester-strlcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:06:15 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/17 19:51:39 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{	
	char	src[] = "hello world";
	char	dest[12];
	int		dest_size;
	int		cpy_size;
	int		str_len;
	
	dest_size = sizeof(dest);
	cpy_size = 5;
	str_len = strlcpy(dest, src, cpy_size);
}
