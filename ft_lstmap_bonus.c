/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:07:44 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:07:44 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_LSTMAP
Descripcion: Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada
	nodo. Crea una lista resultante de la aplicación correcta y sucesiva de la
	función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el
	contenido de un nodo, si hace falta.
Parametros de entrada :
	-lst: un puntero a un nodo.
	-f: la dirección de un puntero a una función usada en la iteración de cada
	elemento de la lista.
	-del: un puntero a función utilizado para eliminar el contenido de un nodo,
	si es necesario.
Resultado:
	Correcto: La nueva lista.
	Error: NULL si falla la reserva de memoria.
Comportamiento:
	-Se comprueba los parametros de entrada.
	-Se crea una lista vacia.
	-Se recorre lst, creando para cada nodo un nuevo nodo en la nueva lista
	aplicando la funcion f al contenido del nodo original.
	-Borrar la lista original.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			free(new_node);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
