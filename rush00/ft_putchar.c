/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgnat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 16:52:17 by kgnat             #+#    #+#             */
/*   Updated: 2017/04/08 16:53:44 by kgnat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
