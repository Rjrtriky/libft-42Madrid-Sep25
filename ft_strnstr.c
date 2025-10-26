/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 18:19:29 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 18:19:29 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRNSTR
Descripcion: Busca la primera aparición de una subcadena en una cadena, con 
	límite de longitud.
Parametros de entrada:
	-haystack: Cadena principal donde buscar
	-needle: Subcadena a buscar
	-len: Número máximo de caracteres a examinar en haystack
Resultado:
	Correcto: Puntero a la primera aparición de needle en haystack
	Error: NULL si needle no se encuentra dentro de los primeros len
		caracteres
Comportamiento:
1- Comprobar que los punteros haystack y needle no son nulos.
2- Si needle es cadena vacía, retornar haystack.
3- Recorrer haystack hasta len caracteres o encontrar el nulo terminador.
4- Para cada posición en haystack, comparar con needle.
5- Si se encuentra needle completo, retornar puntero a esa posición.
6- Si no se encuentra después de examinar len caracteres, retornar NULL.
Notas:
- La búsqueda se limita a los primeros len caracteres de haystack.
- Si needle es cadena vacía (""), retorna haystack (comportamiento estándar).
- Útil para buscar subcadenas en buffers de tamaño limitado.
- Similar a strstr pero con límite de búsqueda explícito.
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *srch, size_t len);

char	*ft_strnstr(const char *str, const char *srch, size_t len)
{
	size_t	i;
	size_t	j;

	if (srch[0] == '\0')
		return ((char *)str);
	i = 0;
	while ((i < len) && (str[i] != '\0'))
	{
		j = 0;
		while ((str[i + j] == srch[j]) && ((i + j) < len) && (srch[j] != '\0'))
		{
			j++;
		}
		if (srch[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
