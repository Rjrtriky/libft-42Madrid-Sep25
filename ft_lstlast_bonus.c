/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:07:38 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:07:38 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_LSTLAST
Descripcion: Devuelve el último nodo de la lista.
Parametros de entrada :
	-lst: puntero al primer nodo de la lista.
Resultado:
	-Puntero al último nodo de la lista.
Comportamiento:
	-Comprobar parametros de entrada.
	-Recorrer la lista hasta encontrar el último nodo.
	-Devolver el puntero al último nodo.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
