#include "binary_trees.h"

/**
 * binary_tree_nodes - calculate the number of leaves in a binary tree
 * @tree: pointer to the root node of the tree to check
 * Return: number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
