/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:00:23 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/07 16:01:32 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_ls(".");
	else
	{
		--argc;
		while (argc > 0)
		{
			ft_ls(*argv);
			++argv;
			--argc;
		}
	}
	return (0);
}
