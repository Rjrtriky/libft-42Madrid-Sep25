/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:31:53 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:31:53 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_PUTSTR_FD
Descripcion: Envía el caracter recibido al fichero especificado.
Parametros de entrada :
	-c: caracter a escribir
	-fd: fichero donde se escribe
		#define STDIN_FILENO  0  // Entrada estándar
		#define STDOUT_FILENO 1  // Salida estándar  
		#define STDERR_FILENO 2  // Error estándar	
Resultado: Nada
Comportamiento:
	-Escribe el caracter 'c' en el fichero espeficicado por 'fd'.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen((char *)s);
	write (fd, s, len);
}
