/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 18:18:49 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 18:18:49 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRRCHR
Descripcion: Busca la última aparición de un carácter en una cadena.
Parametros de entrada:
	-s: La cadena donde se realiza la búsqueda
	-c: El carácter a buscar (pasado como int, convertido a char)
Resultado:
	Correcto: Puntero a la última aparición del carácter
	Error: NULL si el carácter no se encuentra en la cadena
Comportamiento:
	-Recorremos la cadena hasta el finnal.
	-Iteramos de atrás buscando el carácter c.
	-Si encontramos el caracter, devolvemos la posicion.
	-Si no devolvemos NULL.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
