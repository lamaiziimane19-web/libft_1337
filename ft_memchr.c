/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:21:07 by ouyahyou          #+#    #+#             */
/*   Updated: 2026/10/17 16:43:38 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);	
		i++;
	}
	return NULL;
	
}

int main()
{
	char *res = ft_memchr("heldo" , 'l', 5);
	if(res == NULL)
		printf("the char not foud");
	else{
		printf("%s\n" , res);
	}
}	

