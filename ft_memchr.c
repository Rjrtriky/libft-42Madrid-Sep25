/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:08:09 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:08:09 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_MEMCHR
Descripcion: Busca la primera aparición de un carácter en un bloque de memoria.
Parametros de entrada:
	-s: Puntero al bloque de memoria donde se realiza la búsqueda
	-c: Carácter a buscar (pasado como int, convertido a unsigned char)
	-n: Número de bytes a examinar
Resultado:
	Correcto: Puntero a la primera aparición del carácter
	Error: NULL si el carácter no se encuentra en los primeros n bytes
Comportamiento:
1- Comprobar que el puntero 's' no es nulo y que 'n' es mayor que cero.
2- Convertir el carácter 'c' a unsigned char para la comparación.
3- Recorrer los primeros 'n' bytes del bloque de memoria.
4- Comparar cada byte con el carácter buscado.
5- Si se encuentra una coincidencia, retornar el puntero a esa posición.
6- Si no se encuentra después de examinar n bytes, retornar NULL.
Notas:
- La búsqueda se realiza byte a byte, no carácter a carácter.
- Examina memoria sin importar el tipo de datos almacenado.
- Útil para buscar valores específicos en buffers binarios.
- Similar a strchr pero trabaja con memoria cruda y tiene límite n.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len);

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < len)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
