/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:09:19 by machaiba          #+#    #+#             */
/*   Updated: 2023/03/10 00:05:46 by machaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct s_list
{
	int            data;
	struct s_list   *next;
}	t_list;


void    checkarguments(int ac, char **av, t_list **stack_a);
char	**ft_split(char *s, char c);
char	*ft_strdup(char *s1);
size_t	ft_strlen(char *str);
char	*ft_substr(char *str, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
long	ft_atoi(char *str);
void    ft_lstadd_front(t_list **lst, t_list *new);
t_list  *ft_lstnew(int content);
t_list  *ft_lstlast(t_list *lst);
int 	ft_lstsize(t_list *lst);
void	stacks(char **splits, t_list **head);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	sort_3(t_list **stack_a);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void    rrr(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
int		smallest_node(t_list **stack_a);
int		small_index(t_list **stack_a);
int		sort_check(t_list **stack_a);
void	sort_100(t_list **stack_a, t_list **stack_b);
int		indexes(t_list **stack_a, int data);
int		biggest_node(t_list **stack_a);
int		big_index(t_list **stack_a);
void    sort_500(t_list **stack_a, t_list **stack_b);
void	sort_anything(t_list **stack_a, t_list **stack_b);
void	ftfree(char **splits);
int	big_index(t_list **stack_a);

#endif