#include "monty.h"
/**
 * f_swap - adds the stack's top two elements.
 * @head: stack head
 * @count: line_num
 * Return: nothing
*/
void f_swap(stack_t **head, unsigned int count)
{
	bus_t bus = {NULL, NULL, NULL, 0};
	stack_t *h;
	int len = 0, aux;

	h = *head;
	do {
		h = h->next;
		len++;
	} while (h);
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
