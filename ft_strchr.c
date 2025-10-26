/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:33:04 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:33:04 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRCHR
Descripcion: Busca la primera aparición de un carácter en una cadena.
Parametros de entrada:
	-s: La cadena donde se realiza la búsqueda
	-c: El carácter a buscar (pasado como int, convertido a char)
Resultado:
	Correcto: Puntero a la primera aparición del carácter
	Error: NULL si el carácter no se encuentra en la cadena
Comportamiento:
1- Comprobar que la cadena 's' no es nula.
2- Convertir el carácter 'c' a char para la búsqueda.
3- Recorrer la cadena carácter por carácter hasta encontrar 'c' o llegar al nulo.
4- Si se encuentra 'c', retornar el puntero a esa posición.
5- Si se llega al final de la cadena sin encontrar 'c', retornar NULL.
Notas:
- La búsqueda incluye el carácter nulo terminador si se busca '\\0'.
- Útil para encontrar caracteres específicos en cadenas de texto.
- Similar a memchr pero específica para cadenas terminadas en nulo.
- Retorna la posición exacta del carácter encontrado en la cadena.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
