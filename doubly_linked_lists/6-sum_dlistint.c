#include "lists.h"

/**
 * sum_dlistint - Returns the sum of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
