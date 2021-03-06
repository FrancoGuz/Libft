/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:35:12 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/19 16:10:16 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		l;
	int		i;
	char	*str;

	i = 0;
	l = 0;
	str = s1;
	while (s1[l] != '\0')
		l++;
	while (s2[i] != '\0')
	{
		s1[l] = s2[i];
		i++;
		l++;
	}
	s1[l] = '\0';
	s1 = str;
	return (s1);
}
