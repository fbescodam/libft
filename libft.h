/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:35:23 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 21:31:44 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <stdlib.h>

void			*ft_memset(void *s, int c, unsigned int n);
void			ft_bzero(void *s, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memccpy(void *dest, const void *src, int c, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
unsigned int	ft_strlen(const char *s);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *str, const char *sub, unsigned int len);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_calloc(unsigned int nmemb, unsigned int size);
char			*ft_strdup(const char *src);

#endif
