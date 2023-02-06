/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidgomez <davidgomez@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:48:52 by davidgomez        #+#    #+#             */
/*   Updated: 2023/02/06 12:38:16 by davidgomez       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_buff
{
	char			str[BUFFER_SIZE + 1];
	size_t			fd;
	struct s_buff	*next;
}				t_buff;

char	*get_next_line(int fd);
int		ft_strcpy(char *dst, char *src);
char	*ft_strchr(char *s, char c);
void	*ft_memcpy(void *dst, const void *src, size_t len);

#endif