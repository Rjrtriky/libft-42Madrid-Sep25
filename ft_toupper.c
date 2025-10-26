/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 19:24:01 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 19:24:01 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_TOUPPER
Descripcion: Convierte un carácter minúscula a mayúscula.
Parametros de entrada:
	-c: El carácter a convertir (pasado como int para compatibilidad)
Resultado:
	Correcto: Carácter en mayúscula si era minúscula
	Error: El mismo carácter sin cambios si no era minúscula
Comportamiento:
1- Comprobar si el carácter está en el rango de letras minúsculas (a-z).
2- Si es una letra minúscula, convertir a mayúscula restando 32.
3- Si no es una letra minúscula, retornar el carácter sin cambios.
4- Retornar el resultado como int para compatibilidad.
Notas:
- Solo afecta a letras minúsculas (a-z, 97-122 en ASCII).
- Las letras mayúsculas y otros caracteres se retornan sin cambios.
- La conversión se realiza restando 32 (diferencia entre minúsculas y
	mayúsculas en ASCII).
- Útil para normalizar texto y comparaciones case-insensitive.
- Complemento de la función ft_tolower.
*/

#include "libft.h"

int	ft_toupper(int c);

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - ('a' - 'A'));
	else
		return (c);
}
