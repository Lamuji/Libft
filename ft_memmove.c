/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:23:08 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/26 09:01:51 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *source;
    unsigned char *destination;
    
    i = 0;
    source = (unsigned char*)src;
    destination = (unsigned char*)dest;
    
    if(destination > source)
    {
        while(n-- > 0)
            destination[n] = source[n];
    }
        else
        {
            while(i < n)
                destination[i] = source[i];
                i++;
        }
    return (dest);       
}
