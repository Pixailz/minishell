/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:54:13 by stales            #+#    #+#             */
/*   Updated: 2022/09/28 18:01:45 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief			Clear a string
 *
 * @param dest		String to clear
 *
 * @return (void)	None.
 */
void	ft_strclr(char *s)
{
	while (s && *s)
		*s++ = 0;
}
