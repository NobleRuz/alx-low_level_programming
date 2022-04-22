#include "lists.h"

/**
 * list_len: Number of elements in
 *            a linked list_t list.
 * @h: Linked list_t list.
 * @elements: a counter var for size_t/nodes
 *
 * Return: Number of elements in h.
 */
size_t list_len(const list_t *h)
{
    size_t nodes;

    nodes = 0;
    while (h != NULL)
    {
        h = h->next;
        nodes++;
    }
    return (nodes);
}
