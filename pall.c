#include "monty.h"
/**
 * my_pall - to print the stack
 * @head: stack head
 * @count: not used
 * Return: nothing
*/
void my_pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
