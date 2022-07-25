/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcabezas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:27:23 by gcabezas          #+#    #+#             */
/*   Updated: 2022/07/24 21:09:16 by gcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_checksquare(char **m, char obstacle, int str_height, int str_length)
{
	char	e[str_height][str_length];
	int		d[2];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < str_height)
	{
		while (j < str_length)
		{
			d[0] = i;
			d[1] = j;
			check(d, m, str_height, str_length);
			j++;
		}
		i++;
	}
}
//paso el mapa, la altura de el cuadrado, la longitud del cuadrado, y el caracter que sea el obstaculo

int	check(char **m, int str_height, int str_length, char obstacle)
{
	int	ix;
	int	jx;
	int	f;
	int	u;

	ix = 0;
	jx = 0;
	f = str_height * str_length;
//ix es la longitud de el mapa
	while (m[ix][jx] != '\n')
		ix++;
	ix++;
	while ()
//recorro todo el mapa hasta llegar al final o hasta llegar a un momento en el que el cuadrado no quepa
//para ésto sumamos a la posición actual la longitud del cuadrado y lo igualamos a la longitud del mapa.
//y lo mismo con la altura.
	while (m[0] != '\n')
	{
		while (pos[1] + str_length <= jx)
		{
			if (m[pos_y][pos_x] == obstacle)
			{
				return (0);
			}
			u++;
		}
	}
	if ()
	return (1);
}

int	check(char **m, int str_height, int str_length, char obstacle)
{
	int	ix;
	int	jx;

	ix = 0;
	jx = 0;
	while (m[ix][jx] != '\n')
		ix++;
	ix++;
	while (pos[0] + str_height <= ix && pos[0] != '\n')
	{
		while (pos[1] + str_length <= jx)
		{
			if (m[pos_y][pos_x] == obstacle)
			{
				return (0);
			}
		}
	}
	return (1);
}