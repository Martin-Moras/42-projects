/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:06:15 by mmoras@stud       #+#    #+#             */
/*   Updated: 2025/10/24 21:10:14 by mmoras@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset_test(void)
{
	char	str[] = "hello";

	ft_memset(str, ';', 3);
	printf("\n\n%s\n\n", str);
}

void	ft_bzero_test(void)
{
	char	str[] = "hello";

	ft_bzero(str, 4);
	printf("\n\n%s\n\n", str);
}

void	ft_memcpy_test(void)
{
	char	src[] = "hello";
	char	dest[10];

	ft_memcpy(dest, src, 2);
}

void	ft_memmove_test(void)
{
	char	src[] = "hello";
	char	dest[10];

	ft_memmove(dest, src, 6);
	printf("\n\n%s\n\n", dest);
}

void	ft_strlcpy_test(void)
{
	char	src[] = "lorem";
	int		dest_len;
	int		cpy_size;
	int		str_len;
	char	dest[20];

	dest_len = 20;
	cpy_size = 15;
	// str_len = strlcpy(dest, src, cpy_size);
	// printf("system func:\ndest:%s\nsrc:%s\nlen:%i", dest, src, str_len);
	// ft_bzero(dest, dest_size);
	str_len = ft_strlcpy(dest, src, cpy_size);
	printf("ft func:\ndest:");
	write(1, dest, dest_len);
	printf("%s\nsrc:%s\nlen:%i\n", dest, src, str_len);
}

void	ft_strlcat_test(void)
{
	char	src[] = "7890";
	char	dst[14] = "123456";
	int		cpy_size;
	int		str_len;

	cpy_size = 9;
	// str_len = strlcpy(dest, src, cpy_size);
	// printf("system func:\ndest:%s\nsrc:%s\nlen:%i", dest, src, str_len);
	// ft_bzero(dest, dest_size);
	str_len = ft_strlcat(dst, src, cpy_size);
	printf("ft func:\ndest:%s\n", dst);
	printf("src:%s\nlen:%i\n", src, str_len);
}

void	ft_toupper_test(void)
{
}

void	ft_tolower_test(void)
{
}

void	ft_strchr_test(void)
{
	printf("\n\n%s\n\n", ft_strchr("teste", '\0'));
}

void	ft_strrchr_test(void)
{
	printf("\n\n%s\n\n", ft_strchr("teste", '\0'));
}

void	ft_strncmp_test(void)
{
	printf("\n\n%i\n\n", ft_strncmp("test\200", "test\0", 6));
}

void	ft_memchr_test(void)
{
}

void	ft_memcmp_test(void)
{
}

void	ft_strnstr_test(void)
{
}

void	ft_atoi_test(void)
{
	printf("\n\n%i\n", ft_atoi("2147483648"));
	printf("%i\n", ft_atoi("2147483647"));
	printf("%i\n", ft_atoi("-2147483648"));
	printf("%i\n", ft_atoi("12345"));
	printf("%i\n", ft_atoi("-4356"));
	printf("%i\n", ft_atoi("654:654"));
	printf("%i\n", ft_atoi("1"));
	printf("%i\n", ft_atoi("-1"));
}

void	ft_calloc_test(void)
{
}

void	ft_strdup_test(void)
{
}

void	ft_substr_test(void)
{
	printf("\n\n%s\n\n", ft_substr("1234567890", 2, 3));
	printf("\n\n%s\n\n", ft_substr("1234567890", 0, 300));
	printf("\n\n%s\n\n", ft_substr("1234567890", 9, 30));
	printf("\n\n%s\n\n", ft_substr("1234567890", 20, 3));
	printf("\n\n%s\n\n", ft_substr("1234567890", 2, 0));
	printf("\n\n%s\n\n", ft_substr("tripouille", 100, 1));
	printf("\n\n%s\n\n", ft_substr("1", 42, 42000000));
}

void	ft_strjoin_test(void)
{
	char	s1[] = "";
	char	s2[] = "dolor sit amet";

	printf("\n\n%s\n\n", ft_strjoin(s1, s2));
}

void	ft_strtrim_test(void)
{
	printf("\n\n%s\n\n", ft_strtrim("", ""));
	printf("\n\n%s\n\n", ft_strtrim("", "12345"));
	printf("\n\n%s\n\n", ft_strtrim("wert", ""));
	printf("\n\n%s\n\n", ft_strtrim("erereeerere", "ere"));
	printf("\n\n%s\n\n", ft_strtrim("ererrrertererre", "re"));
}

void	ft_split_test(void)
{
	char	**out;
	int		i;

	out = ft_split("lorem ipsum dolor sit amet,", 'i');
	i = 0;
	printf("\n");
	while (out[i])
	{
		printf("\n%s", out[i]);
		i++;
	}
	printf("\n");
}

void	ft_itoa_test(void)
{
	printf("\n\n%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-2147483647));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(-1234567));
	printf("%s\n", ft_itoa(1234567));
}

char	mapi(unsigned int i, char c)
{
	static int	indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

void	ft_strmapi_test(void)
{
	printf("\n\n%s\n", ft_strmapi(ft_strdup("LoReM iPsUmsssssssssssss"),
			&mapi));
}

void	ft_putchar_fd_test(void)
{
}

void	ft_putstr_fd_test(void)
{
}

void	ft_putendl_fd_test(void)
{
}
void	ft_putnbr_fd_test(void)
{
}

void	ft_lstnew_test(void)
{
}
void	ft_lstadd_front_test(void)
{
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
	char input_buffer[4];
	int input_buffer_res;
	char *test_func_names[] = {"ft_memset_test", "ft_bzero_test",
		"ft_memcpy_test", "ft_memmove_test", "ft_strlcpy_test",
		"ft_strlcat_test", "ft_toupper_test", "ft_tolower_test",
		"ft_strchr_test", "ft_strrchr_test", "ft_strncmp_test",
		"ft_memchr_test", "ft_memcmp_test", "ft_strnstr_test", "ft_atoi_test",
		"ft_calloc_test", "ft_strdup_test", "ft_substr_test", "ft_strjoin_test",
		"ft_strtrim_test", "ft_split_test", "ft_itoa_test", "ft_strmapi_test",
		"ft_putchar_fd_test", "ft_putstr_fd_test", "ft_putendl_fd_test",
		"ft_putnbr_fd_test", "ft_lstnew_test", "ft_lstadd_front_test", NULL};

	void (*test_funcs[])() = {ft_memset_test, ft_bzero_test, ft_memcpy_test,
		ft_memmove_test, ft_strlcpy_test, ft_strlcat_test, ft_toupper_test,
		ft_tolower_test, ft_strchr_test, ft_strrchr_test, ft_strncmp_test,
		ft_memchr_test, ft_memcmp_test, ft_strnstr_test, ft_atoi_test,
		ft_calloc_test, ft_strdup_test, ft_substr_test, ft_strjoin_test,
		ft_strtrim_test, ft_split_test, ft_itoa_test, ft_strmapi_test,
		ft_putchar_fd_test, ft_putstr_fd_test, ft_putendl_fd_test,
		ft_putnbr_fd_test, ft_lstnew_test, ft_lstadd_front_test, NULL};
	printf("Select test (empty = run all):\n");
	for (int i = 0; i < str_array_len(test_func_names); i++)
	{
		printf("%i) ", i);
		printf("%s\n", test_func_names[i]);
	}
	read(0, input_buffer, sizeof(input_buffer));
	input_buffer_res = atoi((const char *)input_buffer);
	test_funcs[input_buffer_res]();
	return (0);
}
