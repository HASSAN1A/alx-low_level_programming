#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: returns the head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int data;

		if (*head == NULL)
			return (0);

	aux = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(aux);

	return (data);
}
