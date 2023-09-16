#include "libft.h"

t_list	*ft_lstnew(void *data)
{
	t_list	*node; 

	node = (t_list *)malloc(sizeof(t_list)); 

	if (node == NULL) 
		return (NULL);

	node->data = data; 

	node->next = NULL; 

	return (node);
}