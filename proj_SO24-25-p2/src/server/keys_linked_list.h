#ifndef KEYS_LINKED_LIST_H
#define KEYS_LINKED_LIST_H

typedef struct KeyListNode {
    char *key;
    struct KeyListNode *next;
} t_KeyListNode;

t_KeyListNode* create_list_node_key(char *key);
void append_list_node_key(t_KeyListNode *node, char *key);

void delete_list_node_key(t_KeyListNode *node, char *key);

void delete_list_key(t_KeyListNode *head);

int search_list_node_key(t_KeyListNode *node, char *key);

#endif