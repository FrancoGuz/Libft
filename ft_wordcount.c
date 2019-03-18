/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 13:50:40 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/14 14:06:43 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *s, char c)
{
	int sc;
	int i;

	i = 0;
	sc = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (s[i] == c)
				sc++;
		}
		i++;
	}
	return (sc);
}
