/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:39:09 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/07 17:27:43 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_ls.h"

struct s_btnode		*add_file_to_btree(struct s_btnode *pt_btree, char *str)
{
	if (pt_btree == NULL)
	{
		pt_btree = (struct s_btnode *)malloc(sizeof(struct s_btnode));
		if (pt_btree == NULL)
			return (NULL);
		pt_btree->filename = ft_strdup(str);
		if (pt_btree->filename == NULL)
			return (NULL);
		pt_btree->left = NULL;
		pt_btree->right = NULL;
	}
	else if (ft_strcmp(str, pt_btree->filename) < 0)
		pt_btree->left = add_file_to_btree(pt_btree->left, str);
	else
		pt_btree->right = add_file_to_btree(pt_btree->right, str);
	return (pt_btree);
}

void	print_files_from_btree(struct s_btnode *pt_btree)
{
	if (pt_btree != NULL)
	{
		print_files_from_btree(pt_btree->left);
		ft_putendl(pt_btree->filename);
		print_files_from_btree(pt_btree->right);
	}
}

void	rev_print_files_from_btree(struct s_btnode *pt_btree)
{
	if (pt_btree != NULL)
	{
		rev_print_files_from_btree(pt_btree->right);
		ft_putendl(pt_btree->filename);
		rev_print_files_from_btree(pt_btree->left);
	}
}
