/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbouras <abbouras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:32:10 by abbouras          #+#    #+#             */
/*   Updated: 2024/10/24 14:32:10 by abbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[i] && (i < dstsize - len_dst - 1))
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_dst + len_src);
}

/*#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
        char dest[8] = "Lucas";
        char src[5] = "Malik";
        printf("%u\n", ft_strlcat(dest, src,  4));
        printf("%zu\n", strlcat(dest, src,  4));
}*/