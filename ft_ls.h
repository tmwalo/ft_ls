/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:03:33 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/07 16:19:14 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "libft.h"

struct 			s_btnode{
	char		*filename;
	s_btnode	*left;
	s_btnode	*right;
};

void	ft_ls(char *str);

#endif
