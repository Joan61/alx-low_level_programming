#### 0x17. C - Doubly linked lists

Learning about Doubly linked lists.

###### 0-print_dlistint.c

> A function that prints all the elements of a `dlistint_t` list.
>
>> Prototype: `size_t print_dlistint(const dlistint_t *h);`
>> Return: the number of nodes

###### 1-dlistint_len.c

> A function that returns the number of elements in a `linked dlistint_t` list.
>
>> Prototype: `size_t dlistint_len(const dlistint_t *h);`

###### 2-add_dnodeint.c

> A function that adds a new node at the beginning of a `dlistint_t` list.
>
>> Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
>> Return: the address of the new element, or `NULL` if it failed