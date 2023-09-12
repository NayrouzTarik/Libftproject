#include "libft.h" //add a new node at the begging of the list

void	ft_lstadd_front(t_list **lst, t_list *new) //lst is already the first node in the list
{
	if (!new) //checking if we have a node to add
		return ;
	new->next = *lst; 
    /* in the 7 line we are accesing the next part of the node not the date part and 
    we are setting the "next" part of the new node to point to the same node that *lst*/
}