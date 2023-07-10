/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:26:14 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/09 14:30:18 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(const char *s)
{
	int		i;
	char	*chr;

	i = 0;
	chr = (char *)s;
	while (chr[i])
	{
		if (chr[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sb;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	if (start > slen)
		return (ft_strdup(""));
	sb = (char *) malloc(sizeof(char) * (len + 1));
	if (!sb)
		return (0);
	i = 0;
	while (s[start] && i < len)
	{
		sb[i] = s[start];
		i++;
		start++;
	}
	sb[i] = '\0';
	return (sb);
}

char	*ft_strdup(const char *s1)
{
	char	*sc;
	int		i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
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
