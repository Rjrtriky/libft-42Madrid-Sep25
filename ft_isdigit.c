/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:04:07 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:04:07 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_ISDIGIT
Descripcion: Comprueba si el caracter es un dígito decimal.
Parametros de entrada:
	-c: El caracter a evaluar (pasado como int para compatibilidad)
Resultado:
	Correcto: 1 si el caracter es un dígito (0-9)
	Error: 0 si el caracter no es un dígito
Comportamiento:
1- Comprobar si el caracter está en el rango de dígitos decimales.
2- El rango válido para dígitos es de '0' a '9' (48-57 en ASCII).
3- Si el caracter está dentro del rango, retornar 1.
4- Si el caracter está fuera del rango, retornar 0.
Notas:
- Esta función solo verifica dígitos decimales, no otros tipos de dígitos.
- Sigue el estándar de la isdigit() de libc, que toma un int pero trabaja
  con caracteres (valores entre 0-255 o EOF).
- Es útil para validar entrada de usuario y procesamiento de números.
- Los dígitos en ASCII van del 48 ('0') al 57 ('9').
*/

#include "libft.h"

int	ft_isdigit(int nbr);

int	ft_isdigit(int nbr)
{
	if ((nbr >= 48) && (nbr <= 57))
		return (1);
	else
		return (0);
}
