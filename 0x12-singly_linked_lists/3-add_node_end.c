#include "lists.h"
/**
 * add_node_end - add node to the end of list
 * @head: A double pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	end_node = malloc(sizeof(list_t));

	end_node->str = strdup(str);
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end_node;
	}
	return (end_node);
}
