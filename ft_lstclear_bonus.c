/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:07:07 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:07:07 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_LSTCLEAR
Descripcion: Elimina y libera el nodo ’lst’ dado y todos los consecutivos de
	ese nodo, utilizando la función ’del’ y free(3). Al final, el puntero a la
	lista debe ser NULL.
Parametros de entrada :
	-lst: la dirección de un puntero a un nodo.
	-del: un puntero a función utilizado para eliminar el contenido de un nodo.
Resultado:
	Nada
Comportamiento:
	-Comprueba parametro lst de entrada, si es NULL, no hace nada.
	-Iterar la lista hasta encontrar el ultimo nodo de forma recursiva.
	-Borrar contenido e poner next a NULL.
*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	if ((*lst)->next != NULL)
		ft_lstclear(&(*lst)->next, del);
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
