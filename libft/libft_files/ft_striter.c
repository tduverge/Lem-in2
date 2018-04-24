/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kbedene <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/27 18:37:09 by kbedene      #+#   ##    ##    #+#       */
/*   Updated: 2018/02/28 09:29:17 by kbedene     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
			f(&s[i++]);
	}
}
