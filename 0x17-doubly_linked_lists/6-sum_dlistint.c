#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
