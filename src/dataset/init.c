/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:17:16 by brda-sil          #+#    #+#             */
/*   Updated: 2022/09/01 01:44:12 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	init_signal(void)
{
	signal(SIGINT, signal_handler);
	signal(SIGQUIT, signal_handler);
	return (0);
}

char	*init_get_prompt(void)
{
	return (ft_strdup("minishell@hostname:~/Documents$ "));
}

int	init_config(t_main *config, char **envp)
{
	config->env_path = get_path(envp);
	config->prompt = init_get_prompt();
	config->line_buffer = NULL;
	return (0);
}

int	init_entry(t_main *config, char **envp)
{
	init_config(config, envp);
	init_signal();
	debug_init(config);
	return (0);
}
