#include "lists.h"

/**
 *free_list - function that frees list_t
 *@head - pointer to head mode
 *
 *Return: no return
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		head = head->next;
		free(temp);
	}
}
