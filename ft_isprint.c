/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:04:38 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:04:38 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_ISPRINT
Descripcion: Comprueba si el caracter es imprimible (incluyendo espacio).
Parametros de entrada:
	-c: El caracter a evaluar (pasado como int para compatibilidad)
Resultado:
	Correcto: 1 si el caracter es imprimible (32-126 en ASCII)
	Error: 0 si el caracter no es imprimible (0-31 y 127 en ASCII)
Comportamiento:
1- Comprobar si el caracter está en el rango de caracteres imprimibles.
2- El rango válido para caracteres imprimibles es de 32 a 126 inclusive.
3- Si el caracter está dentro del rango, retornar 1.
4- Si el caracter está fuera del rango, retornar 0.
*/

#include "libft.h"

int	ft_isprint(int nbr);

int	ft_isprint(int nbr)
{
	if ((nbr < 32) || (nbr > 126))
		return (0);
	else
		return (1);
}
