#include "monty.h"
/**
  *f_rotr- rotates the stack in order: to the bottom
  *@head: stack head
  *@count: line_num
  *Return: nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
