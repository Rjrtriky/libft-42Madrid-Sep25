/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:33:25 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:33:25 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRITERI
Descripcion: A cada carácter de la string ’s’, aplica la función ’f’ dando como
	parámetros el índice de cada carácter dentro de ’s’ y la dirección del
	propio carácter, que podrá modificarse si es necesario.
Parametros de entrada :
	-s: La string que iterar.
	-f: La función a aplicar sobre cada carácter.
Resultado:
	-Nada
Comportamiento:
	- Iteramos por cada caracter de la cadena y aplica la función ’f’ a cada
	uno de ellos. La funcion tiene como primer parametro la posicion del
	caracter y como segundo parametro la direccion del caracter.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if ((s != NULL) && (f != NULL))
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
