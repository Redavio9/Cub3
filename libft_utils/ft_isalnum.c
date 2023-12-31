/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:49:00 by rarraji           #+#    #+#             */
/*   Updated: 2022/10/05 18:52:02 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 48 && i <= 57) || ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)))
		return (1);
	return (0);
}
