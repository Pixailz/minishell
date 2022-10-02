/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:31:21 by pix               #+#    #+#             */
/*   Updated: 2022/09/28 17:57:05 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief			checks if c is a digit (0 through 9).
 *
 * @param c			character value to check
 *
 * @return (int)	nonzero if character is a digit and zero if not
 */
int	ft_isdigit(const char c)
{
	return (c >= '0' && c <= '9');
}
