/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidgomez <davidgomez@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:12:58 by davidgomez        #+#    #+#             */
/*   Updated: 2023/01/27 18:43:27 by davidgomez       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_buffprocesor(int fd, char *str);
char	*get_next_line(int fd);
int		ft_strcpy(char *dst, char *src);
char	*ft_strchr(char *s, char c);
void	*ft_memcpy(void *dst, const void *src, size_t len);

#endif