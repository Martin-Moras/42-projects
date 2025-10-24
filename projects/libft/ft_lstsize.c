/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:19:55 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/24 21:22:52 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list			*curr;
	unsigned int	amount;

	curr = lst;
	amount = 0;
	while (curr)
	{
		curr = curr->next;
		amount++;
	}
	return (amount);
}
