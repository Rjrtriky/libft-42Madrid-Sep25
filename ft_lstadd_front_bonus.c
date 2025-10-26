/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:06:56 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:06:56 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_LSTADD_FRONT
Descripcion: Añade el nodo ’new’ al principio de la lista ’lst’.
Parametros de entrada :
	-lst: la dirección de un puntero al primer nodo de una lista.
	-new: un puntero al nodo que añadir al principio de la lista.
Resultado:
	Nada
Comportamiento:
	-Comprueba si los parametros de entrada son validos.
	-Pone en el puntero del nodo nuevo, la direccion del primer nodo de la
	lista.
	-Asignamos al puntero de la lista, la direccion del nodo nuevo.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
