/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:03:50 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:03:50 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_ISASCII
Descripcion: Comprueba si el valor corresponde a un carácter ASCII válido.
Parametros de entrada:
	-c: El valor a evaluar (pasado como int para compatibilidad)
Resultado:
	Correcto: 1 si el valor está en el rango ASCII (0-127)
	Error: 0 si el valor está fuera del rango ASCII
Comportamiento:
1- Comprobar si el valor está dentro del rango ASCII estándar.
2- El rango ASCII válido es de 0 a 127 inclusive.
3- Si el valor está dentro del rango, retornar 1.
4- Si el valor está fuera del rango, retornar 0.
Notas:
- Esta función verifica el estándar ASCII de 7 bits (128 caracteres).
- Los valores fuera del rango 0-127 no son caracteres ASCII válidos.
- Es útil para validar datos antes de procesarlos como texto ASCII.
- El parámetro se pasa como int para compatibilidad con la isascii() de libc.
*/

#include "libft.h"

int	ft_isascii(int nbr);

int	ft_isascii(int nbr)
{
	if ((nbr >= 0) && (nbr <= 127))
		return (1);
	else
		return (0);
}
