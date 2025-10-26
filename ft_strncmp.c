/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 18:08:12 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 18:08:12 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRNCMP
Descripcion: Compara dos cadenas hasta un número máximo de caracteres.
Parametros de entrada:
	-s1: Primera cadena a comparar
	-s2: Segunda cadena a comparar
	-n: Número máximo de caracteres a comparar
Resultado:
	Iguales: 0 si las cadenas son iguales en los primeros n caracteres
	Diferencia: Entero distinto de cero indicando la diferencia
		(positivo si s1 > s2, negativo si s1 < s2)
Comportamiento:
1- Comprobar que las cadenas s1 y s2 no son nulas.
2- Comprobar que el tamaño n es mayor que cero.
3- Recorrer las cadenas hasta n caracteres o encontrar diferencia.
4- Comparar cada par de caracteres como unsigned char.
5- Si se encuentra una diferencia, retornar la diferencia entre los caracteres.
6- Si se llega a n caracteres sin diferencias, retornar 0.
7- Si se encuentra un nulo terminador en ambas, retornar 0.
Notas:
- La comparación se realiza carácter a carácter como unsigned char.
- Se detiene al encontrar el primer carácter diferente o al llegar a n.
- Más segura que strcmp al limitar la cantidad de caracteres comparados.
- Útil para comparar prefijos o porciones de cadenas.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size);

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t			i;
	unsigned int	dif;

	i = 0;
	dif = 0;
	while ((i < size) && (s1[i] != '\0') && (s2[i] != '\0') && (dif == 0))
	{
		dif = (unsigned char) s1[i] - (unsigned char) s2[i];
		i++;
	}
	if ((dif == 0) && (i < size))
		dif = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (dif);
}
