#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the parent node.
 * @value: Integer stored in the node.
 *
 * Return: The new left node(leaf) or NULL on failure or if parent is NULL.
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new, *temp;

new = malloc(sizeof(binary_tree_t));

if (new == NULL)
return (NULL);

new->left = NULL;
new->right = NULL;
new->n = value;

if (parent->left == NULL)
{
parent->left = new;
new->parent = parent;
}
else
{
temp = parent->left;
parent->left = new;
new->parent = parent;
new->left = temp;
temp->parent = new;
}
return (new);
}
