/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-24 15:03:39 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-24 15:03:39 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FT_STRLCAT
Descripción: Concatena dos cadenas de forma segura, limitando el tamaño total
Parametros de entrada:
	dst: Puntero al buffer destino
	src: Puntero al string fuente a concatenar
	size: Tamaño total del buffer destino
Resultado:
	Correcto:Longitud total que tendría la cadena resultante,sin el null final)
	Error: Si size es 0, retorna la el tamaño de src y dst
Comportamiento:
	-Calcula la longitud actual de las cadenas
	-Si la longitud es mayor o igual a size, retorna size + longitud de src
	-Copia desde src hasta completar size - longitud - 1 caracteres
	-Asegura que el string resultante esté null-terminado
	-Retorna la longitud total que tendría la cadena concatenada*/

#include "libft.h"

size_t	ft_strlcat(char *dst, char *ori, size_t size);

size_t	ft_strlcat(char *dst, char *ori, size_t size)
{
	size_t	dst_len;
	size_t	ori_len;
	size_t	j;

	dst_len = ft_strlen(dst);
	ori_len = ft_strlen(ori);
	if (size <= dst_len)
		return (size + ori_len);
	j = 0;
	while ((dst_len + j) < (size - 1) && ori[j] != '\0')
	{
		dst[dst_len + j] = ori[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + ori_len);
}
