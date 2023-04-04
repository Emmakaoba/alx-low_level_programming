#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - this functions will add a new node at the beginning of a listint_t list
* @head: pointer to the first node in the list
* @n: data to insert in that new node
*
* Return: always pointer to the new node, or NULL if the function  fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
