/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tabs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:58:52 by engooh            #+#    #+#             */
/*   Updated: 2022/03/31 19:29:22 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_free_tabs(void **tabs)
{
    int i;

    if (!tabs)
        return (0);
    i = -1;
    while (tabs[++i])
        free(tabs[i]);
    free(tabs[i]);
    free(tabs);
    return (1);
}
