/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 17:07:51 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 17:07:51 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_LSTNEW
Descripcion: Crea un nuevo nodo (malloc) con el contenido ’content’ y el puntero
	al siguiente nodo a NULL.
Parametros de entrada :
	-content: el contenido con el que crear el nodo.
Resultado:
	-Correcto: Devuelve el nuevo nodo.
	-Error: Devuelve NULL si falla la reserva de memoria.
Comportamiento:
	-Comprobamos content.
	-Reservamos memoria para un nuevo nodo con el tipo de datos t_list y 
	comprobamos  si la reserva ha sido correcta.
	-Asignamos content al campo content del nuevo nodo y ponemos a NULL el
	campo next.
*/

#include "libft.h"

t_list	*ft_lstnew(void *new_content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = new_content;
	new->next = NULL;
	return (new);
}
