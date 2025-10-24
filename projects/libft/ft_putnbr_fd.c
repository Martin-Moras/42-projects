/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:42:51 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/23 19:14:05 by mmoras@stud      ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	out_len;
	unsigned int	i;
	int				pow;
	char			c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	set_pow_out_len_i(&out_len, &pow, &i, n);
	if (n < 0)
		write(fd, "-", 1);
	while (pow > 1 || pow < -1)
	{
		c = (char)((n / pow) % 10) + '0';
		write(fd, &c, 1);
		pow /= 10;
		i++;
	}
	c = (char)((n / pow) % 10) + '0';
	write(fd, &c, 1);
}
