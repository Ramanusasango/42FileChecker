/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgigault <jgigault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:34:07 by jgigault          #+#    #+#             */
/*   Updated: 2015/01/06 12:48:38 by jgigault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tmp/printf.h"
#include <stdlib.h>
#include <stdio.h>

int				main(int argc, char **argv)
{
	int		ret;

	ret = ft_printf(argv[1], argv[2]);
	printf("|%d", ret);
	return (0);
}