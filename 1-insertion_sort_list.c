#include "sort.h"

/**
* swapNodes - Swap two nodes in a  doubly-linked list
* @head: Pointer to the head of the doubly-linked list
* @node1: Pointer to the first node
* @node2: Pointer to the second node
*/

void swapNodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *temp_next, *temp_prev;

	if (node1 == node2 || !node1 || !node2)
		return;

	/* Check if the nodes are adjacent */
	if (node1->next == node2)
	{
		node1->next = node2->next;
		if (node2->next)
			node2->next->prev = node1;
		node2->prev = node1->prev;
		node1->prev = node2;
		node2->next = node1;
		if (node2->prev)
			node2->prev->next = node2;
		else
			*head = node2;
	}
	else
	{
		node1->prev->next = node2;
		node2->next->prev = node1;
		temp_prev = node1->prev;
		node1->prev = node2->prev;
		node2->prev = temp_prev;
		temp_next = node1->next;
		node1->next = node2->next;
		node2->next = temp_next;
		if (node1->prev)
			node1->prev->next = node1;
		else
			*head = node1;
		if (node2->prev)
			node2->prev->next = node2;
		else
			*head = node2;
	}
}

/**
* insertion_sort_list - This sorts a doubly linked list of ints by
* using the insertion sort algorithm.
* @list: Pointer to the head of a doubly-linked list of ints.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *itr, *insert, *temp;

	itr = NULL;
	insert = NULL;
	temp = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;

	for (itr = (*list)->next; itr != NULL; itr = temp)
	{
		temp = itr->next;
		insert = itr->prev;
		while (insert != NULL && itr->n < insert->n)
		{
			swapNodes(list, insert, itr);
			print_list(*list);
			insert = itr->prev;
		}
	}
}
