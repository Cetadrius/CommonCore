/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:09:59 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 09:45:38 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//@brief		Read BUFFER_SIZE bytes from "fd" and store in archive
//@param fd		File descriptor;
//@param archive	pointer to storage
//@return		point to the filled storage
static char	*ft_to_arch(int fd, char *archive)
{
	char	*buffer;
	int		b_read;

	buffer = malloc(sizeof(char *) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	b_read = 1;
	while (!ft_strchr_cust(archive, '\n') && b_read != 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(buffer);
			free(archive);
			archive = NULL;
			return (NULL);
		}
		buffer[b_read] = '\0';
		archive = ft_bufferjoin(archive, buffer);
	}
	free(buffer);
	return (archive);
}

//@brief		extract line terminated ny "\n" from archive;
//@param archive	pointer to storage;
//@return			pointer to line;
static char	*ft_from_arc(char *archive)
{
	int		i;
	char	*line;

	i = 0;
	if (!archive[i])
		return (NULL);
	while (archive[i] && (archive[i] != '\n'))
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (archive[i] && (archive[i] != '\n'))
	{
		line[i] = archive[i];
		++i;
	}
	if (archive[i] == '\n')
	{
		line[i] = archive[i];
		++i;
	}
	line[i] = '\0';
	return (line);
}

//@brief clear extracted char from arch keep evt that din't went to line;
//@param archive	storage;
//@return		pointer for what was left in storage;
static char	*ft_housekeeping(char *archive)
{
	int		i;
	int		rest;
	char	*left;

	i = 0;
	while (archive[i] && (archive[i] != '\n'))
		++i;
	if (!archive[i])
	{
		free(archive);
		return (NULL);
	}
	left = malloc(sizeof(char) * (ft_strlen(archive) - i + 1));
	if (!left)
	{
		free(left);
		return (NULL);
	}
	++i;
	rest = 0;
	while (archive[i])
		left[rest++] = archive[i++];
	left[rest] = '\0';
	free(archive);
	return (left);
}

//@brief get the next line from 'fd';
//@param file descriptor;
//@return pointer to string;
char	*get_next_line(int fd)
{
	char			*line;
	static char		*archive;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!archive)
	{
		archive = malloc(1);
		archive[0] = '\0';
	}
	archive = ft_to_arch(fd, archive);
	if (!archive)
		return (NULL);
	line = ft_from_arc(archive);
	archive = ft_housekeeping(archive);
	return (line);
}
