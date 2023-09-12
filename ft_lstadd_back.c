#include "libft.h" //add a new node at the end of the list

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!new && !lst)  //cheking if there s a new box to add and if there s already a line o boxes to add to
        return;
    if (!*lst) //if the line of boxes (list) is empty so we make the new box the first in the list
    {
        *lst = new;
        return;
    }
    ft_lstlast(*lst)->next = new; /*If the line of boxes already has boxes in it, 
                                    we find the last box (the one at the very end). 
                                    Then, we connect the new box to this last box*/
}