/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:08:16 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:08:16 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_MEMCMP
Descripcion: Compara dos bloques de memoria byte a byte.
Parametros de entrada:
	-s1: Puntero al primer bloque de memoria
	-s2: Puntero al segundo bloque de memoria
	-n: Número de bytes a comparar
Resultado:
	Correcto: 0 si los bloques son iguales en los primeros n bytes
	Diferencia: Entero distinto de cero indicando la diferencia
		(positivo si s1 > s2, negativo si s1 < s2)
Comportamiento:
1- Comprobar que los punteros s1 y s2 no son nulos.
2- Comprobar que el tamaño n es mayor que cero.
3- Recorrer los primeros n bytes de ambos bloques de memoria.
4- Comparar cada par de bytes (s1[i] y s2[i]) como unsigned char.
5- Si se encuentra una diferencia, retornar la diferencia entre los bytes.
6- Si no se encuentran diferencias después de n bytes, retornar 0.
Notas:
- La comparación se realiza byte a byte como unsigned char.
- Retorna la diferencia del primer byte que no coincide.
- Útil para comparar datos binarios, estructuras o cualquier tipo de memoria.
- Similar a strncmp pero trabaja con memoria cruda y no se detiene en null bytes.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (void *)s1;
	ptr2 = (void *)s2;
	while (i < n)
	{
		if (ptr1 > ptr2)
			return (1);
		if (ptr1 < ptr2)
			return (-1);
		ptr1++;
		ptr2++;
		i++;
	}
	return (0);
}*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
		i++;
	}
	return (0);
}
