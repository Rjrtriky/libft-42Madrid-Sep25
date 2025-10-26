/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:06:44 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:06:44 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_LSTADD_BACK
Descripcion: Añade el nodo nuevo enviado por parametro al final de la lista.
Parametros de entrada :
	-lst: el puntero al primer nodo de una lista.
	-new: el puntero a un nodo que añadir a la lista.
Resultado:
	-Ninguno.
Comportamiento:
	-Comprobar nuevo nodo, si es NULL volver.
	-Comrpobar lista vacia.
		*Si:asignar a lista puntero a nuevo nodo.
		*No: Iterar hasta encontrar ultomo nodo y enlazar al nuevo.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		current = ft_lstlast(*lst);
		current->next = new;
	}
}
