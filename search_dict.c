/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyurrita <jyurrita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:50:49 by jyurrita          #+#    #+#             */
/*   Updated: 2022/07/24 21:10:51 by jyurrita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	write_value(char *str, int i)
{
	i++;
	while (str[i] != '\0' && str[i] != '\n')
	{
		while (str[i] == 32)
			i++;
		write(1, str + i, 1);
		i++;
	}
	write(1, " ", 1);
}

int	ft_cmp(char *key, int *pi, char *buffer)
{
	int	i;

	i = 0;
	while (buffer[*pi] == key[i] && buffer[*pi] != ':'
		&& buffer[*pi] != '\0' && key[i] != '\0')
	{
		i++;
		*pi = *pi +1;
	}
	if (key[i] == '\0' && i > 0 && buffer[*pi] == ':')
		return (1);
	else
		return (0);
}

void	search_key(char *buffer, char *key)
{
	int	i;
	int	*pi;

	pi = &i;
	i = 0;
	while (buffer[i] != '\0')
	{
		if (ft_cmp(key, pi, buffer) == 1)
		{
			write_value(buffer, i);
			return ;
		}
		else
		{
			while (buffer[i] != '\n')
			{
				i++;
			}
			i++;
		}
	}
}

void	charge_buffer(char *buffer)
{
	int	id_file;
	int	bytes;

	id_file = open("numbers.dict", O_RDONLY);
	bytes = read(id_file, buffer, 2000);
	close(id_file);
}

void	search_dict(char *key)
{
	char	buffer[2000];

	charge_buffer(buffer);
	search_key(buffer, key);
}
