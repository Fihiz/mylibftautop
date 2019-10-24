/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 14:44:33 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 19:33:29 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*str;
	char		*desti;
	char		*temp;
	size_t		i;

	i = 0;
	while (i < n)
	{
		temp[i] = str[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		desti[i] = temp[i];
		i++;
	}
	desti[i] = temp[i];
	return ((void *)desti);
}