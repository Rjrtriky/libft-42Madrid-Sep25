/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:34:16 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:34:16 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*FT_STRJOIN
Descripcion: Genera un puntero a una nueva cadena que es la union de las 2 que
	se pasan como parametros.
Parametros de entrada :
	-s1: Puntero a la primera cadena
	-s2: Puntero a la segunda cadena
Resultado:
	Correcto: Puntero a la nueva cadena
	Error: NULL si falla al reservar memoria.
Comportamiento:
	1- Calcula la longitud de las 2 cadenas.
	2- Reserva memoria para la nueva cadena.
	3- Si no se ha podido reservar memoria devuelve NULL.
	4- Copia la primera cadena en la nueva.
	5- Copia la segunda cadena al final de la nueva.
	6- Devuelve el puntero a la nueva cadena.
*/

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;
	size_t	i;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	if ((s1_len + s2_len) > __SIZE_MAX__)
		return (NULL);
	ptr = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		ptr[i] = s2[i - s1_len];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
