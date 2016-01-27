/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 14:30:45 by fpolini           #+#    #+#             */
/*   Updated: 2016/01/27 14:41:00 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcnt1.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	char	*ptr;
	int 	retour;
	int		fd;
	int		i;

	i = 1;
	fd = open(argv[1], O_RDWR);
	while (retour = get_next_line(fd, &ptr))
	{
		printf("lecture numero %d la chaine lu est %s et le retour est %d\n", i, ptr, retour);
		i = i + 1;
	}
	printf("lecture numero %d la chaine lu est %s et le retour est %d\n", i, ptr, retour);
	return (0);
}
