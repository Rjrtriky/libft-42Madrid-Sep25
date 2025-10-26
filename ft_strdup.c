/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:33:15 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:33:15 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRDUP
Descripcion: Crea en memoria un clon de una variable string
Parametros de entrada :
	Puntero al string original a duplicar
Resultado:
	Correcto: Puntero con la nueva direccion de memoria donde esta el duplicado
			de la cadena
	Error: NULL
Comportamiento:
	1- Calcula la longitud del string original
	2- Reserva memoria con malloc para la copia
	3- Copia el contenido del string original al nuevo
	4- Retorna el puntero al nuevo string*/

#include "libft.h"

char	*ft_strdup(const char *ori);

char	*ft_strdup(const char *ori)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	len = ft_strlen((char *)ori);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = ori[i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
