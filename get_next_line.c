/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 14:42:45 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/18 15:28:11 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(int const fd, char **line)
{
	int open;
	int read;

	fd = open(**line, O_RDONLY);

	if (fd == -1)
		ft_putstr("des octets ont ete lus");
		return(0);
	if (fd >= 1)
		return(ft_putstr("fichier.txt"));
	if (octets_lus == 0)
		return(ft_putstr("Lecture du fichier termine");
// tab_buff[ft_strlen("fichier.txt")]
	read(fd, buffer[BUF_SIZE], nb_octets);
	close (fd);
	return();
}
