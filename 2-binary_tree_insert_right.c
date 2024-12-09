#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right child of another node
 * @parent: the parent node of the new one
 * @value: the value of the new node
 * Return: the new node, or NULL if failed
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;
	parent->right = new_node;
	new_node->left = NULL;

	if (new_node->right != NULL)
		new_node->right->parent = new_node;
	return (new_node);
}
