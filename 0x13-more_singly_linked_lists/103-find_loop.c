#include "lists.h"

/**
 * find_listint_loop - check for a loop in a linkedlist
 * @head: head of the link
 * Return: node where the loop starts or null
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw_ptr, *fst_ptr;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slw_ptr = head;
	fst_ptr = head;
	slw_ptr = slw_ptr->next;
	fst_ptr = fst_ptr->next->next;

	while (fst_ptr && fst_ptr->next)
	{
		if (slw_ptr == fst_ptr)
			break;

		slw_ptr = slw_ptr->next;
		fst_ptr = fst_ptr->next->next;
	}

	if (slw_ptr != fst_ptr)
		return (NULL);

	slw_ptr = head;

	while (slw_ptr != fst_ptr)
	{
		slw_ptr = slw_ptr->next;
		fst_ptr = fst_ptr->next;
	}

	return (slw_ptr);
}
