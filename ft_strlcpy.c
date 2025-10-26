/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 18:03:19 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 18:03:19 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRLCPY
Descripcion: Copia una cadena a un buffer con límite de tamaño, garantizando
	terminación nula.
Parametros de entrada:
	-dest: Buffer destino donde se copiará la cadena
	-src: Cadena origen a copiar
	-size: Tamaño del buffer destino
Resultado:
	Longitud de la cadena origen (sin incluir el nulo terminador)
Comportamiento:
	-Comprobamos si los parametros de entrada son nulos.
	-Verificamos si origen es vacio.
	-Si no, copiamos cada caracter hasta final de origen o hasta size.
	-Aseguramos que destino esté nulo-terminado. 
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size != 0)
	{
		while ((src[i] != '\0') && i < (size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
