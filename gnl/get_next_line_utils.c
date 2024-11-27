/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:11:42 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 09:15:02 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//@brief get lenght of diferent strs as needed;
//@param str string to be mesured;
//@param c	 mesure until this char;
//@return 	lenght of the string until first iteration of c;
int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	if (str)
	{
		while (str[l])
			l++;
	}
	return (l);
}

//@brief concatenate the buffers;
//@param str1 	first string;
//@param str2 	second string;
//@retun pointer to newly joined string;
char	*ft_bufferjoin(char *str1, char *str2)
{
	char	*newstr;
	int		i;
	int		j;
	int		size;

	if (!str1)
	{
		str1 = malloc(sizeof(char));
		str1[0] = '\0';
	}
	size = ft_strlen(str1) + ft_strlen(str2);
	newstr = malloc(sizeof(char *) * (size + 1));
	if (!newstr)
		return (0);
	i = -1;
	j = 0;
	while ((i < size) && str1[++i])
		newstr[i] = str1[i];
	while ((i < size) && (str2[j]))
		newstr[i++] = str2[j++];
	newstr[i] = '\0';
	if (str1)
		free (str1);
	return (newstr);	
}

//@brief find a char in a given str;
//@param *str	strig where the search will be conducted;
//@param c 		char we're looking for;
//@return		pointer to the found char;
char	*ft_strchr_cust(const char *str, int c)
{
	while (*str != '\0' && *str != (char)c)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

//@brief 		duplicates a string of the given lenght;
//@param str 	string to be duplicated;
//@param l		lenght of duplucation;
//@return nstr	new string;
char	*ft_strndup(char *str, int len)
{
	char	*nstr;
	int		i;

	nstr = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!nstr)
		return (0);
	while (i < len)
	{
		nstr[i] = str[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
