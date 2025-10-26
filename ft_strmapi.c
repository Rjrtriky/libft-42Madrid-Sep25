/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 18:07:52 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 18:07:52 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRMAPI
Descripcion: Aplica la función ’f’ a cada carácter de la cadena ’s’, pasando su
	índice como primer argumento y el propio carácter como segundo argumento.
	Se crea una nueva cadena (utilizando malloc(3)) para recoger los resultados
	de las sucesivas aplicaciones de ’f’.
Parametros de entrada :
	-s: La string que iterar.
	-f: La función a aplicar sobre cada carácter.
Resultado:
	Correcto:La string creada tras el correcto uso de ’f’ sobre cada carácter.
	Error: NULL si falla la reserva de memoria.
Comportamiento:
	- Reservar memoria para la nueva string y verificar.
	- Iterar sobre cada carácter de la string original.
	- Aplicar la función ’f’ a cada carácter junto con su índice y gurardarlo
	en la nueva string.
	- Devolver la nueva string.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dest;

	if (s == NULL || f == NULL)
		return (NULL);
	dest = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
