/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:27:57 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:27:57 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_PUTSTR_FD
Descripcion:
	Imprime un numero entero en un fichero de salida que se indica.
Parametros de entrada :
	-n: numero entero a escribir
	-fd: fichero donde se escribe
		#define STDIN_FILENO  0  // Entrada estándar
		#define STDOUT_FILENO 1  // Salida estándar  
		#define STDERR_FILENO 2  // Error estándar
Resultado: Nada
Comportamiento:
	-Si es negativo, escribe el signo, convierte el numero a positivo.
	-Dividimos entre 10 para obtener el cociente y el resto.
	-La condicion de parada es cuando el cociente sea 0, sino llamamos de nuevo
	a la funcion con el cociente.
	-Convertimos el resto al ASCII correspondiente.
	-Excribimos el ASCII calculado en el fichero de salida indicado.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char	digital;
	int		quotient;
	int		remainder;

	if (n < 0)
	{
		digital = '-';
		write (fd, &digital, 1);
		quotient = (n / 10) * -1;
		remainder = (n % 10) * -1;
	}
	else
	{
		quotient = n / 10;
		remainder = n % 10;
	}
	if (quotient != 0)
		ft_putnbr_fd(quotient, fd);
	digital = remainder + '0';
	write (fd, &digital, 1);
}
