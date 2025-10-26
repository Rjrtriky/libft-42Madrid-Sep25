/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 19:21:28 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 19:21:28 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_TOLOWER
Descripcion: Convierte un carácter mayúscula a minúscula.
Parametros de entrada:
	-c: El carácter a convertir (pasado como int para compatibilidad)
Resultado:
	Correcto: Carácter en minúscula si era mayúscula
	Error: El mismo carácter sin cambios si no era mayúscula
Comportamiento:
1- Comprobar si el carácter está en el rango de letras mayúsculas (A-Z).
2- Si es una letra mayúscula, convertir a minúscula sumando 32.
3- Si no es una letra mayúscula, retornar el carácter sin cambios.
4- Retornar el resultado como int para compatibilidad.
Notas:
- Solo afecta a letras mayúsculas (A-Z, 65-90 en ASCII).
- Las letras minúsculas y otros caracteres se retornan sin cambios.
- La conversión se realiza sumando 32 (diferencia entre mayúsculas y minúsculas
	en ASCII).
- Útil para normalizar texto y comparaciones case-insensitive.
*/

#include "libft.h"

int	ft_tolower(int c);

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + ('a' - 'A'));
	else
		return (c);
}
