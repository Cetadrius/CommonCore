/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:57:48 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 11:04:59 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char **argv) {
    int fd;
    char *line = NULL;

    if (argc != 2) {
        fprintf(stderr, "Use: %s <file path>\n", argv[0]);
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("Error opening the file");
        return 1;
    }
	line = get_next_line(fd);
	printf("%s", line);
    free(line);
	line = get_next_line(fd);
	printf("%s", line);

    close(fd);
    return 0;
}