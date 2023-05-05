/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:57:25 by machaiba          #+#    #+#             */
/*   Updated: 2023/05/05 18:42:23 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	MINISHELL_H
# define	MINISHELL_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef struct  token
{
    char    *type;
}   token_t

# endif