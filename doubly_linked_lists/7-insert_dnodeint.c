#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node on index inside of a linked list.
 *
 * @h: Double pointer to the doubly linked list.
 *
 * @idx: Index to insert the new node.
 *
 * @n: Value of the new node.
 *
 * Return: Position of the new node, NULL if fails or the index doesn't exits.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	while (tmp && idx != 1)
		tmp = tmp->next, idx--;

	if (!tmp && idx != 1)
		return (NULL);
	if (!tmp->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = tmp->next;
	new_node->prev = tmp;

	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
