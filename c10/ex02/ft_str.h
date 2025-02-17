/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:22:40 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/17 16:26:31 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putstr_tail(char *str, int n);
char	*ft_strappend(char *str1, char *str2);

#endif
