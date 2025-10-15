/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:06:15 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/15 23:41:45 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	test1(void)
{
	printf("test1");
}

void	test2(void)
{
	printf("test2");
}

void	ft_memset_test(void)
{
	char	*str;

	str = "hello";
	ft_isalpha('1');
	// ft_memset(str, 'f', 2);
	printf("%s", str);
}

int	str_array_len(char *arr[])
{
	int	count;

	count = 0;
	while (arr[count] != NULL)
	{
		count++;
	}
	return (count);
}

int	main(void)
{
	char	input_buffer[1];
	char	*test_func_names[] = {"test1", "test2", "ft_memset_test", NULL};

	void (*test_funcs[])() = {test1, test2, ft_memset_test, NULL};
	printf("Select test (empty = run all):\n");
	for (int i = 0; i < str_array_len(test_func_names); i++)
	{
		printf("[%i]) ", i);
		printf("%s\n", test_func_names[i]);
	}
	read(0, input_buffer, sizeof(input_buffer));
	test_funcs[atoi(input_buffer)]();
}
