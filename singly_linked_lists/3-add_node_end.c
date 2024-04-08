#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to the pointer to the head node.
 * @str: The string to be added to the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - Address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *end_node;
    char *duplicate;

    end_node = malloc(sizeof(list_t));

     if (end_node == NULL) 
    {
        return (NULL); 
    }

    duplicate = strdup(str);

    if (duplicate == NULL) 
    {
        free(duplicate); 
        return (NULL); 
    }

    end_node->str = duplicate;
    end_node->len = strlen(str);
    end_node->next = NULL;
  
  
    if (*head == NULL) 
    {
        *head = end_node;
    } 
    else 
    {
        list_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = end_node;
    }
    return (end_node);
}
