/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:07:27 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:07:27 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_LSTITER
Descripcion: Itera la lista ’lst’ y aplica la función ’f’ en el contenido de
	cada nodo.
Parametros de entrada:
	-lst: un puntero al primer nodo.
	-f: un puntero a la función que utilizará cada nodo.
Resultado:
	Nada.
Comportamiento:
	-Comprueba parametros de entrada si son nulos.
	-Recorro la lista aplicando la funcion f sobre el contenido hasta el final
	de la lista.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if ((lst == NULL) || (f == NULL))
		return ;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
