/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:09:20 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:09:20 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_PUTCHAR_FD
Descripcion: Imprime usando write
Parametros de entrada :
	-c: caracter a escribir
	-fd: fichero donde se escribe
		#define STDIN_FILENO  0  // Entrada estándar
		#define STDOUT_FILENO 1  // Salida estándar  
		#define STDERR_FILENO 2  // Error estándar	
Resultado: Nada
Comportamiento:
	1- Toma un carácter y un file descriptor como entrada
	2- Utiliza la función write para enviar el carácter al file descriptor
	especificado.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
