/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:48:41 by brda-sil          #+#    #+#             */
/*   Updated: 2022/08/25 21:48:49 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	handle_sig_int(void)
{
	ft_printf("\n");
	rl_on_new_line();
	rl_replace_line("", 0);
	rl_redisplay();
}

void	handle_sig_quit(void)
{
	ft_printf("\b\b  \b\b");
	rl_redisplay();
}

void	signal_handler(int signal_code)
{
	if (signal_code == SIGINT)
	{
		debug_catched_signal(SIGINT);
		handle_sig_int();
	}
	if (signal_code == SIGQUIT)
	{
		debug_catched_signal(SIGQUIT);
		handle_sig_quit();
	}
}
