#include "lists.h"

/**
 * find_listint_loop - Finds the first node of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If there is no loop, returns NULL. Otherwise, returns a pointer
 *         to the first node of the loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (head == NULL)
return (NULL);
slow = head;
fast = head;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
