#include "monty.h"
/**
 * f_pint - printing the top
 * @head: stack head
 * @count: line_num
 * Return: nothing
*/
void f_pint(stack_t **head, unsigned int count)
{
	bus_t bus = {NULL, NULL, NULL, 0};
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
