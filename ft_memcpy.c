/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:08:23 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:08:23 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_MEMCPY
Descripcion: Copia n bytes desde un área de memoria origen a un área de memoria
	destino.
Parametros de entrada:
	-dest: Puntero al bloque de memoria destino
	-src: Puntero al bloque de memoria origen
	-n: Número de bytes a copiar
Resultado:
	Correcto: Puntero al bloque de memoria destino
	Error: Comportamiento indefinido si los bloques se solapan
Comportamiento:
1- Comprobar que los punteros dest y src no son nulos.
2- Comprobar que el tamaño n es mayor que cero.
3- Copiar byte a byte desde src hacia dest.
4- Realizar la copia para exactamente n bytes.
5- Retornar el puntero original dest.
Notas:
- No verifica solapamiento de memoria (usar memmove para bloques solapados).
- Copia datos crudos sin importar el tipo o contenido.
- Más eficiente que copiar elemento a elemento en bucles.
- Útil para duplicar buffers, arrays o cualquier estructura de datos.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *org, size_t len);

void	*ft_memcpy(void *dest, const void *org, size_t len)
{
	size_t	i;
	char	*aux_dest;
	char	*aux_org;

	if ((dest == NULL) && (org == NULL))
		return (NULL);
	i = 0;
	aux_dest = (char *)dest;
	aux_org = (char *)org;
	while (i < len)
	{
		*aux_dest = *aux_org;
		aux_dest++;
		aux_org++;
		i++;
	}
	return (dest);
}
