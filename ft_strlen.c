/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 18:07:04 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 18:07:04 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRLEN
Descripcion: Calcula la longitud de una cadena de caracteres.
Parametros de entrada:
	-s: La cadena de la cual calcular la longitud
Resultado:
	Correcto: Número de caracteres antes del nulo terminador
	Error: Comportamiento indefinido si la cadena es nula
Comportamiento:
	-Comprobamos si la cadena es nula.
	-Iteramos hasta encontrar el fin de cadena contando los caracteres.
	devolvemos contador.
*/

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
