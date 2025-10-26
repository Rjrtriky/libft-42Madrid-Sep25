/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:03:15 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:03:15 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*FT_ISALNUM
Descripcion: Comprueba si el caracter es alfanumérico (letra o dígito).
Parametros de entrada:
	-c: El caracter a evaluar (pasado como int para compatibilidad)
Resultado:
	Correcto: 1 si el caracter es una letra (A-Z o a-z) o un dígito (0-9)
	Error: 0 si el caracter no es alfanumérico
Comportamiento:
1- Comprobar si el caracter es una letra mayúscula (A-Z, 65-90).
2- Comprobar si el caracter es una letra minúscula (a-z, 97-122).
3- Comprobar si el caracter es un dígito (0-9, 48-57).
4- Si cumple alguna de las condiciones anteriores, retornar 1.
5- Si no cumple ninguna condición, retornar 0.
Notas:
- Esta función combina las verificaciones de ft_isalpha y ft_isdigit.
- Sigue el estándar de la isalnum() de libc, que toma un int pero trabaja
  con caracteres (valores entre 0-255 o EOF).
- Los rangos válidos son: A-Z (65-90), a-z (97-122), 0-9 (48-57).
*/

int	ft_isalnum(int nbr);

int	ft_isalnum(int nbr)
{
	if (((nbr >= 'A') && (nbr <= 'Z'))
		|| ((nbr >= 'a') && (nbr <= 'z'))
		|| ((nbr >= '0') && (nbr <= '9')))
		return (1);
	else
		return (0);
}
