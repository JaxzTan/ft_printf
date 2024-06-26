/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:35:43 by chtan             #+#    #+#             */
/*   Updated: 2024/05/15 19:14:17 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1 || !set)
		return ((char *)s1);
	start = 0;
	end = ft_strlen(s1);
	if (!end--)
		return (ft_strdup(""));
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	while (end > 0 && ft_strchr(set, *(s1 + end)))
		end--;
	if (++end < start)
		end = start;
	res = (char *)malloc (end - start + 1);
	if (!(res))
		return (NULL);
	ft_strlcpy (res, s1 + start, (end - start + 1));
	return (res);
}
