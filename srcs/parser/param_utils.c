/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nammari <nammari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 09:50:15 by twagner           #+#    #+#             */
/*   Updated: 2022/01/23 15:11:36 by nammari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	init_param(char *file, t_param *param)
{
	(void)file;
	param = malloc(sizeof(t_param));
	param->map = NULL;
	return (SUCCESS);
}