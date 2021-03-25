/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:34:49 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/25 11:52:04 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t size)
{
    unsigned char *source;
    unsigned char *destination;
    size_t i;
    
    i = 0;
    source = (unsigned char*)src;
    destination = (unsigned char*)dest;
    
    while(source[i] != '\0' && i < size)
    {
        destination[i] = source[i];
        i++;
    }
    return (dest);
}