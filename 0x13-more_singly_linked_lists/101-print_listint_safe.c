#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
const listint_t *array[1024];
unsigned int i, j;
i = 0;
current = head;
while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
array[i] = current;
i++;
current = current->next;
for (j = 0; j < i; j++)
{
if (array[j] == current)
{
printf("-> [%p] %d\n", (void *)current, current->n);
return (i);
}
}
}
return (i);
}
