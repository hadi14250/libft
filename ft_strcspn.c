/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:43:36 by hakaddou          #+#    #+#             */
/*   Updated: 2024/09/20 11:48:13 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

int	ft_strcspn(const char *str, const char *set)
{
	int	i;
	int	d;
	int	sum;

	d = 0;
	i = 0;
	sum = 0;
	while(str[i] != '\0')
	{
		d = 0;
		while(set[d] != '\0')
		{
			if (str[i] == set[d])
				return(i);
			d++;
		}
		i++;
	}
	return (ft_strlen((char *)str));
}