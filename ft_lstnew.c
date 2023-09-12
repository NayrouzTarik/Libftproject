#include "libft.h"

t_list	*ft_lstnew(void *data)
{
	t_list	*node; //We're creating a new "box" to hold our data.

	node = (t_list *)malloc(sizeof(t_list)); //We're asking the computer to set aside memory for our node

	if (node == NULL) //allocation failed
		return (NULL);

	node->data = data; //inside the box or node we put the data we want to store.

	node->next = NULL; //the new node we create is not linked or attached to any other node in the list

	return (node); //we return the box or the node filed by the data
}