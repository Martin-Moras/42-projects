/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:30:20 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/23 17:25:39 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	set_pow_out_len_i(unsigned int *out_len, int *pow, unsigned int *i,
		int n)
{
	*pow = 1;
	*out_len = 1;
	if (n < 0)
	{
		*pow = -1;
		*out_len = 2;
	}
	*i = *out_len - 1;
	while (n / *pow > 9)
	{
		*pow *= 10;
		(*out_len)++;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	out_len;
	unsigned int	i;
	int				pow;
	char			*out;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	set_pow_out_len_i(&out_len, &pow, &i, n);
	out = (char *)malloc(out_len + 1);
	if (!out)
		return (NULL);
	while (pow > 1 || pow < -1)
	{
		out[i] = (char)((n / pow) % 10) + '0';
		pow /= 10;
		i++;
	}
	out[i] = (char)((n / pow) % 10) + '0';
	if (n < 0)
		out[0] = '-';
	out[out_len] = '\0';
	return (out);
}
