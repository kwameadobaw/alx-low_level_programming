#include "lists.h"
/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: head of the list
  * @index: which node to stop at
  * Return: pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int current_index;

	current_index = 0;
	while (current != NULL)
	{
		if (current_index == index)
			return (current);
		current = current->next;
		current_index++;
	}
	return (NULL);
}
