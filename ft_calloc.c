/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Evan <Evan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:44:09 by Evan              #+#    #+#             */
/*   Updated: 2025/03/04 15:44:17 by Evan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void	*ptr;

	if (!count || !size)
		return (malloc(1));
	if ((count * size) / size != count)
		return (0);
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	return (ft_memset(ptr, 0, count * size));
}
