/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:08:42 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:08:42 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_MEMSET
Descripcion: Rellena un bloque de memoria con un valor específico.
Parametros de entrada:
	-s: Puntero al bloque de memoria a rellenar
	-c: Valor a establecer (pasado como int, convertido a unsigned char)
	-n: Número de bytes a establecer
Resultado:
	Correcto: Puntero al bloque de memoria original
Comportamiento:
1- Comprobar que el puntero 's' no es nulo.
2- Comprobar que el tamaño 'n' es mayor que cero.
3- Convertir el valor 'c' a unsigned char.
4- Recorrer los primeros 'n' bytes de la memoria apuntada por 's'.
5- Establecer cada byte al valor convertido de 'c'.
6- Retornar el puntero original 's'.
Notas:
- El valor 'c' se convierte a unsigned char para asegurar compatibilidad.
- Útil para inicializar arrays, buffers y estructuras de datos.
- Más eficiente que establecer valores individualmente en un bucle.
- Base para funciones como ft_bzero (que es memset(s, 0, n)).
*/

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len);

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*aux_ptr;
	size_t			i;

	i = 0;
	aux_ptr = ptr;
	while (i < len)
	{
		*aux_ptr = (unsigned char)value;
		aux_ptr++;
		i++;
	}
	return (ptr);
}
