#include "lists.h"
/**
 * print_list - prints all the elements of the list list_t
 * @h: singly linked list.
 * Return: node (number of elements in the list).
 */

size_t print_list(const list_t *h)
{
	size_t nodenum;

	nodenum = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodenum++;
	}
	return (nodenum);
}
