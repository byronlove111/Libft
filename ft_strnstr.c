/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbouras <abbouras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:12:55 by abbouras          #+#    #+#             */
/*   Updated: 2024/10/26 00:12:55 by abbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			len_str;

	if (len == 0)
		return ((char *)big);
	len_str = ft_strlen(little);
	i = 0;
	while (big[i] && i <= len - len_str)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int	main(int ac, char **av)
{
	char *result;

	(void)ac;
	result = ft_strnstr(av[1], av[2], atoi(av[3]));
	if (result != NULL)
		printf("%s\n", result);
	else
		printf("Aucune correspondance trouvée.\n");
}*/