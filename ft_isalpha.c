/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:03:43 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:03:43 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_ISALPHA
Descripcion: Comprueba si el caracter es una letra del alfabeto (mayúscula o 
	minúscula).
Parametros de entrada:
	-c: El caracter a evaluar (pasado como int para compatibilidad)
Resultado:
	Correcto: 1 si el caracter es una letra (A-Z o a-z)
	Error: 0 si el caracter no es una letra
Comportamiento:
1- Comprobar si el caracter está en el rango de letras mayúsculas (A-Z).
2- Comprobar si el caracter está en el rango de letras minúsculas (a-z).
3- Si cumple alguna de las condiciones anteriores, retornar 1.
4- Si no cumple ninguna condición, retornar 0.
Notas:
- Esta función sigue el estándar de la isalpha() de libc, que toma un int
  pero trabaja con caracteres (valores entre 0-255 o EOF).
- Los rangos válidos son: A-Z (65-90) y a-z (97-122).
*/

#include "libft.h"

int	ft_isalpha(int nbr);

int	ft_isalpha(int nbr)
{
	if (((nbr >= 'A') && (nbr <= 'Z')) || ((nbr >= 'a') && (nbr <= 'z')))
		return (1);
	else
		return (0);
}
