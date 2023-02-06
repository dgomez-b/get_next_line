/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidgomez <davidgomez@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:48:49 by davidgomez        #+#    #+#             */
/*   Updated: 2023/02/06 12:23:13 by davidgomez       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */

#include "get_next_line_bonus.h"

#include <stdio.h>

/* ************************************************************************** */

static t_buff	*ft_buff_selector(size_t fd)
{
	static t_buff	*aux = 0;
	t_buff			*cur;

	if (!aux)
	{
		aux = calloc(sizeof(t_buff), 1);
		if (!aux)
			return (0);
		aux->fd = fd;
	}
	cur = aux;
	while (cur && cur->fd != fd)
	{
		if (!cur->next)
		{
			cur->next = calloc(sizeof(t_buff), 1);
			if (!cur->next)
				return (0);
			cur->next->fd = fd;
		}
		cur = cur->next;
	}
	return (cur);
}

static int	ft_buffprocesor(t_buff *aux, char *str)
{
	char		*nl;
	int			i;

	if (*aux->str != 0)
	{
		i = ft_strcpy(str, aux->str);
		*aux->str = 0;
	}
	else
	{
		i = read(aux->fd, str, BUFFER_SIZE);
		if (i >= 0)
			str[i] = 0;
		else
			*str = 0;
	}
	nl = ft_strchr(str, '\n');
	if (!nl)
		return (i);
	i -= ft_strcpy(aux->str, ++nl);
	*nl = 0;
	return (i);
}

static char	*ft_createstr(int len)
{
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (len >= 0)
		str[len--] = 0;
	return (str);
}

char	*ft_assembler(t_buff *aux, int len)
{
	int			j;
	char		*str;
	char		buff[BUFFER_SIZE + 1];

	if (BUFFER_SIZE <= 0 || aux->fd < 0)
		return (0);
	if (!len)
		len = 0;
	j = ft_buffprocesor(aux, buff);
	if (!*buff)
		return (0);
	len += j;
	str = 0;
	if (!ft_strchr(buff, '\n'))
		str = ft_assembler(aux, len);
	if (!str)
		str = ft_createstr(len);
	len -= j;
	if (!str)
		return (0);
	ft_memcpy(str + len, buff, j);
	return (str);
}

char	*get_next_line(int fd)
{
	t_buff	*aux;

	aux = ft_buff_selector(fd);
	if (!aux)
		return (0);
	return (ft_assembler(aux, 0));
}