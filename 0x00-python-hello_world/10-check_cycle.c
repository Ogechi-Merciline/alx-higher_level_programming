#include "lists.h"

/**
* check cycle - it checks if linked lists contain a cycle
* @list: A linked list to check
* Return: 1 if the listhas a cycle and 0 if it doesn't
*/

int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast;

if (!list)
return (0);

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)

return (1);
}

return (0);
}
