/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:11:57 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 11:04:51 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 13
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <fcntl.h>

char	*get_next_line(int fd);

// Util function
int		ft_strlen(char *str);
char	*ft_bufferjoin(char *str1, char *str2);
char	*ft_strchr_cust(const char *str, int c);
char	*ft_strndup(char *str, int len);

#endif
