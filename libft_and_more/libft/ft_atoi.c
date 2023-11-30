/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:51:06 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/30 13:47:30 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	char_start_string(const char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0' && (str[x] == 32 || str[x] == '\t' \
				|| str[x] == '\n'
			||str[x] == '\r' || str[x] == '\v' || str[x] == '\f'))
		x++;
	return (x);
}

long	ft_atoi(const char *str)
{
	long	nb;
	long	temp;
	int		x;
	int		nega;

	nb = 0;
	x = 0;
	nega = 1;
	x = char_start_string(str);
	if (str[x] == '-' && str[x] != '\0' && ++x)
		nega = -1;
	else if (str[x] == '+' && str[x] != '\0')
		x++;
	if (!ft_isdigit(str[x]))
		return (2147483648);
	while (ft_isdigit(str[x]) && str[x] != '\0')
		nb = (nb * 10) + (str[x++] - '0');
	temp = nb * nega;
	if (temp > MAX_INT)
		return (2147483648);
	else if (temp < MIN_INT)
		return (2147483648);
	return ((int)nb * nega);
}
