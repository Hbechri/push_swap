/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:17:10 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/06 18:27:01 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*sc;
	int		i;

	i = 0;
	sc = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!sc)
		return (0);
	while (s1[i])
	{
		sc[i] = s1[i];
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
