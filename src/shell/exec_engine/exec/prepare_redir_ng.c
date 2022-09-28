/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_redir_ng.c                                 :+:      :+:    :+:   *
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:20:03 by brda-sil          #+#    #+#             */
/*   Updated: 2022/09/28 03:24:13 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	prepare_out_file_ng(t_main *config)
{
	t_redirection	*tmp;

	tmp = config->context->cmd[config->context->cmd_id]->out_redir;
	while (tmp)
	{
		if (tmp->is_double)
			prepare_out_double_file(tmp, config);
		else
			prepare_out_file(tmp, config);
		tmp = tmp->next;
	}
}

void	post_prepare_in_file(t_main *config, t_redirection *last)
{
	t_redirection	*tmp;

	tmp = config->context->cmd[config->context->cmd_id]->in_redir;
	last->file = open(last->file_name, O_RDONLY);
	dup2(last->file, STDIN_FILENO);
	close(last->file);
	while (tmp)
	{
		if (tmp->file_name)
			unlink(tmp->file_name);
		tmp = tmp->next;
	}
}

void	prepare_in_file_ng(t_main *config)
{
	t_redirection	*tmp;
	t_redirection	*prev;

	tmp = config->context->cmd[config->context->cmd_id]->in_redir;
	while (tmp)
	{
		if (tmp->is_double)
			prepare_in_double_file(tmp, config);
		else
			prepare_in_file(tmp, config);
		prev = tmp;
		tmp = tmp->next;
	}
	post_prepare_in_file(config, prev);
}
