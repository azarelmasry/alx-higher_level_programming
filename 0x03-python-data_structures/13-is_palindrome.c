#include "lists.h"
/**
* _palindrom - recursive palind
* @head: head list
* Return: 0 a palindrome
* 1 a palindrome
*/
int is _palindrome(listint_t **head)
{
if (head == NULL || *head == NULL)
return (1);
return (aux_palind(head, *head));
}
/**
* aux_palind - funct if is a palindrome
* @head: head list
* @end: end list
* Return: a palindrome
*/
int aux_palind(listint_t **head, listint_t *end)
{
if (end == NULL)
return (1);
if (aux_palind(head, end->next) && (*head)->n == end->n)
{
*head = (*head)->next;
return (1);
}
return (0);
}

