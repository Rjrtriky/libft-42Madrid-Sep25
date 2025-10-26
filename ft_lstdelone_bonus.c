/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:07:15 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:07:15 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_LSTDELONE
Descripcion: Toma como parámetro un nodo ’lst’ (no es la lista entera) y libera
	la memoria del contenido utilizando la función ’del’ dada como parámetro,
	además de liberar el nodo. La memoria de ’next’ no debe liberarse.
Parametros de entrada :
	-lst: el nodo a liberar.
	-del: un puntero a la función utilizada para liberar el contenido del nodo.
Resultado:
	Nada.
Comportamiento:
	-Comprobar parametro de lista, si es NULL volver.
	-Borrar contenido del nodo con la funcion del.
	-Liberar memoria del nodo.
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
