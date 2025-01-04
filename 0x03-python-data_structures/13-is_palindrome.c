#include "lists.h"

/**
 * is_palindrome - check if it palindrome or not
 * @head: the pointer to the list
 * Return: 1 if palindrome, 0 otherwise
*/

int is_palindrome(listint_t **head)
{
	listint_t *first;
	int n, re;

	if (!*head || !(**head).next)
		return (1);

	first = *head, n = first->n;
	while (first->next->next)
	{
		first = first->next;
	}
	if ((first->next)->n != n)
		return (0);
	free_listint(first->next);
	first->next = NULL;
	first = (*head)->next;
	re = is_palindrome(&first);
	if (re == 0)
		return (0);
	add_nodeint_end(head, n);
	return (1);
}

