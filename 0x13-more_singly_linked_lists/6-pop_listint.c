#include "lists.h"
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int a;

	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	a = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (a);
}
