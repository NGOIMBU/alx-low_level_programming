#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new nide at the beginning
 * of a linked list
 * @head: head of a list
 * @n: n element
 
 * Return: address of the new element and NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new-> = *head;
*head = new;

return (*head);
}
