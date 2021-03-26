/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 09:05:52 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/26 09:35:54 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;
    unsigned char *d;
    
    i = 0;
    str = (unsigned char*)s;
    while(i < n)
    {
        if(str[i] == (unsigned char)c)
            return((unsigned char *)s + i);
            i++;
    }
    return (NULL);
}