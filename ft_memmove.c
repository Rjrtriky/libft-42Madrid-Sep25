/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-24 15:06:09 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-24 15:06:09 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_MEMMOVE
Descripcion: Copia n bytes de un área de memoria a otra, manejando solapamientos.
Parametros de entrada:
	-dest: Puntero al bloque de memoria destino
	-src: Puntero al bloque de memoria origen
	-n: Número de bytes a copiar
Resultado:
	Correcto: Puntero al bloque de memoria destino
Comportamiento:
1- Comprobar que los punteros dest y src no son nulos.
2- Comprobar que el tamaño n es mayor que cero.
3- Determinar si hay solapamiento entre las áreas de memoria.
4- Si dest está antes de src o no hay solapamiento: copiar hacia adelante.
5- Si dest está después de src y hay solapamiento: copiar hacia atrás.
6- Retornar el puntero original dest.
Notas:
- Maneja correctamente el solapamiento de memoria.
- Más seguro que memcpy cuando las áreas pueden solaparse.
- La copia hacia atrás evita sobrescribir datos no copiados.
- Útil para operaciones con buffers que pueden superponerse.
*/

#include "libft.h"

void	*ft_memmove(void *des, const void *ori, size_t size);

void	*ft_memmove(void *des, const void *ori, size_t size)
{
	unsigned char	*aux_ori;
	unsigned char	*aux_des;
	size_t			i;

	if ((des == NULL) && (ori == NULL))
		return (NULL);
	aux_ori = (unsigned char *)ori;
	aux_des = (unsigned char *)des;
	i = size;
	if (aux_des > aux_ori)
	{
		while (i > 0)
		{
			i--;
			aux_des[i] = aux_ori[i];
		}
	}
	else if (aux_des < aux_ori)
	{
		while (i--)
		{
			*aux_des++ = *aux_ori++;
		}
	}
	return (des);
}
