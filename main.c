/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:58:23 by fbes          #+#    #+#                 */
/*   Updated: 2020/11/01 17:09:52 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// ft_memset
/*
int		main(void)
{
	char str[50];

	strcpy(str, "This is a string to test the memset function");
	puts(str);

	// memset(str, '$', 11);
	ft_memset(str, '$', 11);
	puts(str);

	return (0);
}
*/

// ft_bzero
/*
int		main(void)
{
	char str[50];

	strcpy(str, "This is a string to test the bzero function");
	puts(str);

	// bzero(str, 11);
	ft_bzero(str, 11);
	puts(str);
	puts(str + 11);

	return (0);
}
*/

// ft_memcpy
/*
int		main(void)
{
	char str[64];
	char dest[64];

	strcpy(str, "This is a string to test the memcpy function");
	strcpy(dest, "This string should get overwritten by the previous one");
	puts(str);
	puts(dest);

	// memcpy(dest, str, 24);
	ft_memcpy(dest, str, 24);
	puts(str);
	puts(dest);

	return (0);
}
*/

// ft_memccpy
/*
int		main(void)
{
	char str[64];
	char dest[64];

	strcpy(str, "This is a string to test the memccpy function");
	strcpy(dest, "This string should get overwritten by the previous one");
	puts(str);
	puts(dest);

	// memccpy(dest, str, 'g', 24);
	ft_memccpy(dest, str, 'g', 24);
	puts(str);
	puts(dest);

	return (0);
}
*/

// ft_memmove
/*
int		main(void)
{
	char str[64];
	char dest[64];

	strcpy(str, "This is a string to test the memmove function");
	strcpy(dest, "This string should get overwritten by the previous one");
	puts(str);
	puts(dest);

	// memmove(dest, str, 24);
	ft_memmove(dest, str, 24);
	puts(str);
	puts(dest);

	return (0);
}
*/

// ft_memchr
/*
int		main(void)
{
	char str[50];

	strcpy(str, "This is a string to test the memchr function");
	puts(str);

	printf("memchr: %p\n", memchr(str, 'o', 24));
	printf("ft_memchr: %p\n", ft_memchr(str, 'o', 24));

	return (0);
}
*/

// ft_memcmp
/*
int		main(void)
{
	char	str1[15];
	char	str2[15];

	strcpy(str1, "ABCDEF");
	strcpy(str2, "ABCDFG");
	printf("memcmp: %d\n", memcmp(str1, str2, 6));
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 6));

	return (0);
}
*/

// ft_strlen
/*
int		main(void)
{
	char str[50];

	strcpy(str, "This is a string to test the strlen function");
	puts(str);

	printf("strlen: %ld\n", strlen(str));
	printf("ft_strlen: %ld\n", ft_strlen(str));

	return (0);
}
*/

// ft_strlcpy
/*
int		main(void)
{
	char str[64];
	char dest[64];

	strcpy(str, "This is a string to test the strlcpy function");
	strcpy(dest, "This string should get overwritten by the previous one");
	puts(str);
	puts(dest);
	//printf("strlcpy returned: %ld\n", strlcpy(dest, str, 13));
	printf("ft_strlcpy returned: %ld\n", ft_strlcpy(dest, str, 13));
	puts(str);
	puts(dest);

	return (0);
}
*/

// ft_strlcat
// strlcat fails when size is bigger than the dest string can hold, ft_strlcat does not
// can be fixed by using ft_memcpy?
/*
int		main(void)
{
	char str[64];
	char dest[64];

	strcpy(str, "ABCDEF");
	strcpy(dest, "abcdef");
	puts(str);
	puts(dest);
	//printf("strlcat returned: %ld\n", strlcat(dest, str, 8));
	printf("ft_strlcat returned: %ld\n", ft_strlcat(dest, str, 8));
	puts(dest);

	return (0);
}
*/

// ft_strchr
/*
int		main(void)
{
	char str[50];

	strcpy(str, "This is a string to test the strchr function");
	puts(str);

	printf("strchr: %p\n", strchr(str, '\0'));
	printf("ft_strchr: %p\n", ft_strchr(str, '\0'));

	return (0);
}
*/

// ft_strrchr
/*
int		main(void)
{
	char str[50];

	strcpy(str, "This is a string to test the strrchr function");
	puts(str);

	printf("strrchr: %p\n", strrchr(str, '\0'));
	printf("ft_strrchr: %p\n", ft_strrchr(str, '\0'));

	return (0);
}
*/

// ft_strnstr
/*
int		main(void)
{
	char str[64];
	char search[64];

	strcpy(str, "This is a testing ABCDEF string");
	strcpy(search, "ABCDEF");
	puts(str);
	puts(search);
	printf("strnstr: %p\n", strnstr(str, search, 50));
	printf("ft_strnstr: %p\n", ft_strnstr(str, search, 50));

	return (0);
}
*/

// ft_atoi
/*
int		main(void)
{
	char test[] = " 	--2147483645";
	printf("atoi: %d\n", atoi(test));
	printf("ft_atoi: %d\n", ft_atoi(test));
	return (0);
}
*/

// isalpha isdigit isalnum isascii isprint toupper tolower
/*
int		main(void)
{
	int test = 78;
	printf("ft_isascii: %d", ft_isascii(test));
	printf(", isascii: %d\n", isascii(test));
	printf("ft_isalpha: %d", ft_isalpha(test));
	printf(", isalpha: %d\n", isalpha(test));
	printf("ft_isdigit: %d", ft_isdigit(test));
	printf(", isdigit: %d\n", isdigit(test));
	printf("ft_isalnum: %d", ft_isalnum(test));
	printf(", isalnum: %d\n", isalnum(test));
	printf("ft_isprint: %d", ft_isprint(test));
	printf(", isprint: %d\n", isprint(test));
	printf("ft_tolower: %d, tolower: %d\n", ft_tolower(test), tolower(test));
	printf("ft_toupper: %d, toupper: %d\n", ft_toupper(test), toupper(test));
	return (0);
}
*/

// ft_calloc
/*
int		main(void)
{
	int 	amount_elems = 10;
	int 	elem_size = 1000;
	void	*c_ptr;
	void	*ft_ptr;

	c_ptr = calloc(amount_elems, elem_size);
	if (c_ptr)
	{
		printf("calloc success\n");
		free(c_ptr);
	}
	else
		printf("calloc failed\n");
	ft_ptr = ft_calloc(amount_elems, elem_size);
	if (ft_ptr)
	{
		printf("ft_calloc success\n");
		free(ft_ptr);
	}
	else
		printf("ft_calloc failed\n");
	return (0);
}
*/

// ft_strdup
/*
int		main(void)
{
	char test[100];
	char *dest;

	strcpy(test, "This is a string to test the strdup function");
	puts(test);

	dest = ft_strdup(test);
	if (dest)
	{
		puts(dest);
		free(dest);
	}
	else
		printf("malloc failed!\n");
	return (0);
}
*/

// ft_substr
/*
int		main(void)
{
	char test[100];
	char *dest;

	strcpy(test, "This is a string to test the substr function");
	puts(test);

	dest = ft_substr(test, 10, 12);
	if (dest)
	{
		puts(dest);
		free(dest);
	}
	else
		printf("malloc failed!\n");
	return (0);
}
*/

// ft_strjoin
/*
int		main(void)
{
	char str1[64];
	char str2[64];
	char *dest;

	strcpy(str1, "This string should...");
	strcpy(str2, "...now be one!");
	dest = ft_strjoin(str1, str2);
	if (dest)
	{
		puts(dest);
		free(dest);
	}
	else
		printf("malloc failed!\n");
	return (0);
}
*/

// ft_strtrim
/*
int		main(void)
{
	char str[100];
	char *dest;

	strcpy(str, "   qqw   It works!   qan   ");
	dest = ft_strtrim(str, " nqa!sw");
	if (dest)
	{
		puts(dest);
		printf("ft_strlen(dest): %ld\n", ft_strlen(dest));
		free(dest);
	}
	else
		printf("malloc failed!\n");
	return (0);
}
*/

// ft_strtrimstr
/*
int		main(void)
{
	char str[100];
	char *dest;

	strcpy(str, "remove It works!remve");
	dest = ft_strtrimstr(str, "remove It works!remve");
	if (dest)
	{
		puts(dest);
		printf("ft_strlen(dest): %ld\n", ft_strlen(dest));
		free(dest);
	}
	else
		printf("malloc failed!\n");
	return (0);
}
*/

// ft_split ft_splitset
/*
int		main(void)
{
	char	str[124];
	char	**test;
	char	**dest;
	size_t	i;

	strcpy(str, "    aqwerty   n@$@@  baaaaa  ");
	test = ft_splitset(str, " ");
	dest = ft_split(str, ' ');

	if (test)
	{
		i = 0;
		while (test[i])
		{
			printf("test[%ld]: ", i);
			puts(test[i]);
			free(test[i]);
			i++;
		}
		free(test);
	}
	else
		printf("malloc failed!\n");

	if (dest)
	{
		i = 0;
		while (dest[i])
		{
			printf("dest[%ld]: ", i);
			puts(dest[i]);
			free(dest[i]);
			i++;
		}
		free(dest);
	}
	else
		printf("malloc failed!\n");
	return (0);
}
*/

// ft_itoa
/*
int		main(void)
{
	int		nb;
	char	*res;

	nb = -149925;
	res = ft_itoa(nb);
	if (res)
	{
		puts(res);
		printf("ft_strlen(res): %ld\n", ft_strlen(res));
		free(res);
	}
	else
		printf("malloc failed!\n");
	return (0);
}
*/

// ft_strmapi
/*
char	strmapi_helper_uppercase(unsigned int i, char c)
{
	return (ft_toupper(c));
}

int		main(void)
{
	char test[100];
	char *dest;

	strcpy(test, "All characters in this string should turn into uppercase!");
	puts(test);
	dest = ft_strmapi(test, &strmapi_helper_uppercase);
	if (dest)
	{
		puts(dest);
		free(dest);
	}
	else
		printf("malloc failed!\n");
	return (0);
}
*/

// ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
/*
int		main(void)
{
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('@', 1);
	ft_putstr_fd("123456789020", 1);
	ft_putendl_fd("newlineplease", 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
