/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:57:48 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 13:57:44 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char **argv) {
	int	fd;
	char	*line = NULL;
	int	i;

	if (argc != 2)
	{
		fprintf(stderr, "Use: %s <file path>\n", argv[0]);
		return 1;
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0) 
	{
		perror("Error opening the file");
		return 1;
	}

	i = 0; // until line [i]
	while (((line = get_next_line(fd)) != NULL) && (i++ <= 5)) 
	{
        	printf("%s", line);
        	free(line); // Free alocated memory
	}
//	line = get_next_line(fd);
//	printf("%s", line);
//    free(line);
//	
    close(fd);
    return 0;
}
