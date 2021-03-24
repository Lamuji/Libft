/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:18:39 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/24 14:24:06 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int value, size_t count)
{
    unsigned char *c;
    size_t i; 
    c = str;
    i = 0;
    
    while (i < count)
    {
        c[i] = value;
        i++;
    }
    return(str);
}