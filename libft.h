/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:04:18 by hkrifa            #+#    #+#             */
/*   Updated: 2021/04/05 09:40:46 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

#include <stdlib.h>
#include <unistd.h>
typedef struct  s_list
{
    void *content;
    struct s_list *next;
}               t_list;
int     ft_toupper(int c);
size_t	ft_strlen(const char *str);
int     ft_isprint(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_tolower(int c);
int     ft_strncmp(const char *dest, const char *src, size_t n);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str,int c);
int     ft_atoi(const char *str);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dest, const char *src, size_t destsize);
char    *ft_strdup(const char *src);
void    *ft_memset(void * pointer, int value, size_t count);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t size);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list  *ft_lstnew(void *content);

#endif