/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:09:28 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:09:28 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_PUTSTR_FD
Descripcion:
	Immprime una cadena seguida de un salto de linea en un fichero de salida
	que se indica.
Parametros de entrada :
	-s: cadena a escribir
	-fd: fichero donde se escribe
		#define STDIN_FILENO  0  // Entrada estándar
		#define STDOUT_FILENO 1  // Salida estándar  
		#define STDERR_FILENO 2  // Error estándar
Resultado: Nada
Comportamiento:
	-Escribimos la cadena en el fichero de salida indicado
	-Escribimos un salto de línea.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen((char *)s);
	write (fd, s, len);
	write (fd, "\n", 1);
}
