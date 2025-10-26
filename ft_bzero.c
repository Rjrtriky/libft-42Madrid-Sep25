/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 16:59:53 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 16:59:53 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_BZERO
Descripcion: Escribe ceros en una zona de memoria de tamaño especificado.
Parametros de entrada:
	-s: Puntero al bloque de memoria a inicializar
	-n: Número de bytes a establecer a cero
Resultado:
	No retorna valor (función void)
Comportamiento:
1- Comprobar que el puntero 's' no es nulo.
2- Comprobar que el tamaño 'n' es mayor que cero.
3- Recorrer los primeros 'n' bytes de la memoria apuntada por 's'.
4- Escribir el valor cero (\\0) en cada byte de memoria.
5- La memoria original es modificada directamente.
Notas:
- Esta función es útil para inicializar buffers y áreas de memoria.
- Equivale a llamar a memset(s, 0, n) pero específica para ceros.
- No retorna valor ya que modifica la memoria directamente.
- Si n es 0, la función no realiza ninguna operación.
*/

#include "libft.h"

void	*ft_bzero(void *ptr, size_t len);

void	*ft_bzero(void *ptr, size_t len)
{
	unsigned char	*aux_ptr;
	size_t			i;

	i = 0;
	aux_ptr = ptr;
	while (i < len)
	{
		*aux_ptr = 0;
		aux_ptr++;
		i++;
	}
	return (ptr);
}
