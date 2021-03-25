#ifndef FT_ABS_H
# define FT_ABS_H

#include <stdlib.h>
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

#endif