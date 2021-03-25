/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 09:12:54 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/25 14:17:26 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *source;
    unsigned char *destination;
    size_t i;
    
    i = 0;
    source = (unsigned char*)src;
    destination = (unsigned char*)dest;
    
    while(i < n)
    {
        destination[i] = source[i];
        if (source[i] == (unsigned char)c)
            return(dest + i + 1);
        i++;
    }
    return (NULL);
}