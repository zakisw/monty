#include "monty.h"
/**
 * f_pstr - prints the string with order : start at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: line_num
 * Return: nothing
*/
void f_pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
