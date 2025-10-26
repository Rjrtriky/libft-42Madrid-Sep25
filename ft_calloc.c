/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:00:26 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:00:26 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*CALLOC
Descripcion: Reserva un espacio en memoria y pone todo el espacio a 0
Parametros de entrada :
	num: numero de variables
	size: tamaño de las variables
Resultado:
	Correcto: puntero a la direccion de memoria reservada
	Error: NULL
Comportamiento:
1- Comprobamos que tanto la cantidad, como el tamaño sea distinto de O 
2- Verificamos que no se puede producir desbordamiento de memoria
3- Reserva memoria
4- Comprueba si no hay error en la reserva
5- Pone a 0 el espacio en memoria*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size);

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if ((num == 0) || (size == 0))
		return (malloc(0));
	if (size > 0 && num > __SIZE_MAX__ / size)
		return (NULL);
	ptr = malloc(num * size);
	if ((ptr == NULL) || (ft_bzero(ptr, (num * size)) != ptr))
		return (NULL);
	else
		return (ptr);
}
