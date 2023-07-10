/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:14:52 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/08 18:13:33 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_stack	*ft_lstnew(int nbr)
{
	t_stack	*list;

	list = (t_stack *)malloc((sizeof(t_stack)));
	if (!list)
		return (NULL);
	list->nbr = nbr;
	list->next = NULL;
	return (list);
}
