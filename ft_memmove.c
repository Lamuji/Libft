/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:23:08 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/25 15:57:36 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *source;
    unsigned char *destination;
    unsigned char *s;
    unsigned char *d;
    
    i = 0;
    source = (unsigned char*)src;
    destination = (unsigned char*)dest;
    
    if(!source && !destination)
        return(NULL);
    if(d < s)
    while( i < n)
    {
        s[i] = source[i] + (n - 1);
        d[i] = destination[i] + (n - 1);
        d[i] = s[i];
        i++;
    }
    return (dest);       
}
