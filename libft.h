/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:35:23 by fbes          #+#    #+#                 */
/*   Updated: 2022/04/09 00:37:34 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdint.h>

# define BUFFER_SIZE 1

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_ditem
{
	void			*content;
	struct s_ditem	*prev;
	struct s_ditem	*next;
}				t_ditem;

typedef struct s_dlist
{
	size_t			size;
	t_ditem			*first;
}				t_dlist;

typedef struct s_ft_va_item
{
	void			*item;
	size_t			size;
}				t_ft_va_item;

typedef t_ft_va_item **	t_ft_va_list;

void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
size_t			ft_strclen(const char *s, char c);
int				ft_numlen(unsigned long n, unsigned int base);
int				ft_ptrlen(intptr_t ptr);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *str, const char *sub, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isneg(int n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_iswhitespace(char c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *src);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_putchar_fd(char c, int fd);
int				ft_putendl_fd(char *s, int fd);
int				ft_putnbr_fd(int n, int fd);
int				ft_putnbr_base_fd(unsigned int n, char *base, int fd);
int				ft_putptr_fd(intptr_t ptr, int fd);
int				ft_putstr_fd(char *s, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstget(t_list *lst, size_t index);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst,
					void *(*f)(void *), void (*del)(void *));
void			ft_lstsort(t_list **lst, int (*f)(void *, void *));
unsigned int	ft_abs(int n);
int				ft_biggest(int a, int b);
int				ft_smallest(int a, int b);
char			*ft_itoa_base(unsigned int n, char *base);
char			*ft_ptoa(intptr_t ptr);
int				ft_get_next_line(int fd, char **line);
size_t			ft_strnlen(const char *s, size_t maxlen);
void			*ft_realloc(void *ptr, size_t old_size, size_t new_size);
void			*ft_free(void *freeable);
void			**ft_free_double_ptr(void **freeable);
char			*ft_stralloc(size_t size);
char			*ft_strschr(char const *str, char const *set);
unsigned int	ft_strhash(const char *str, size_t length);
t_ditem			*ft_ditemnew(void *content);
void			ft_dlstadd_back(t_dlist *list, t_ditem *item);
void			ft_dlstadd_front(t_dlist *list, t_ditem *item);
void			ft_dlstclear(t_dlist *list, void (*del)(void *));
void			ft_dlstdelone(t_ditem *item, void (*del)(void *));
t_ditem			*ft_dlstget(t_dlist *list, size_t index);
void			ft_dlstiter(t_dlist *list, void (*f)(void *));
t_ditem			*ft_dlstlast(t_dlist *list);
t_dlist			*ft_dlstmap(t_dlist *list, void *(*f)(void *),
					void (*del)(void *));
t_dlist			*ft_dlstnew(void);
void			ft_dlstrem(t_dlist *list, t_ditem *item, void (*del)(void *));
char			*ft_strreplace(char *str, char *find, char *replace);
char			*ft_str3join(char *str1, char *str2, char *str3);
char			*ft_strxjoin(size_t amount, t_ft_va_list strs);
t_ft_va_list	ft_va_new(size_t size);
t_ft_va_item	*ft_va_add(t_ft_va_list list, size_t index, void *item,
					size_t size);
void			ft_va_start(t_ft_va_list *item, t_ft_va_list list);
void			ft_va_arg(t_ft_va_list *item);
void			ft_va_end(t_ft_va_list list);

#endif
