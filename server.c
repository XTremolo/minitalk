/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:54:27 by obamzuro          #+#    #+#             */
/*   Updated: 2018/05/19 18:07:06 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

int main()
{
	pid_t	serverpid;

	serverpid = getpid();
	ft_printf("%d", serverpid);
	while (1)
	{
		pause();
	}
}
