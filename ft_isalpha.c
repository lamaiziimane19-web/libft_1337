/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 12:56:25 by ouyahyou          #+#    #+#             */
/*   Updated: 2026/10/15 21:36:16 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int main()
{
	printf("%d\n" , ft_isalpha(67));
	printf("%d\n" , ft_isalpha(200));
	printf("%d"\n , ft_isalpha(-16);
}
