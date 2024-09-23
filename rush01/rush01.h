/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:25:50 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:12:37 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    RUSH01_H
# define    RUSH01_H

int		ft_checkright(int hints[16], int grid[4][4], int row);
int		ft_checktop(int hints[16], int grid[4][4], int col);
int		ft_checkbottom(int hints[16], int grid[4][4], int col);
int		ft_checkleft(int hints[16], int grid[4][4], int row);
int		ft_checkhints(int hints[16], int grid[4][4], int pos, int num);
int		ft_checkhicol(int hints[16], int grid[4][4], int col);
int		ft_checkhirow(int hints[16], int grid[4][4], int row);
int		ft_checkcolrow(int grid[4][4], int col, int row, int num);
int		ft_parse_param(char *str, int hints[16]);
int		ft_is_safe(int hints[16], int grid[4][4], int pos, int num);
int		ft_solve_puzzle(int hints[16], int grid[4][4], int pos);
void	ft_print_grid(int grid[4][4]);
void	ft_print_grid(int grid[4][4]);
void	ft_putstr(char *str);
#endif
