#ifndef LISTS_H
#define LISTS_H


/* The header files need for malloc */
typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
}list_t;

/*HEADER FILES */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
