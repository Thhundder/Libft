/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Evan <Evan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:49:37 by Evan              #+#    #+#             */
/*   Updated: 2025/03/04 15:51:15 by Evan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_memcpy_forward(unsigned char *d, const unsigned char *s,
		unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

static void	ft_memcpy_backward(unsigned char *d, const unsigned char *s,
		unsigned int n)
{
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
}

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (0);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		ft_memcpy_forward(d, s, n);
	else if (d > s)
		ft_memcpy_backward(d, s, n);
	return (dest);
}
