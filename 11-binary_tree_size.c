#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of binary tree
 * @tree: pointer to the root node to measure size
 * Return: Size of binary tree or 0 if fail
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
			left_size = binary_tree_size(tree->left);
		if (tree->right != NULL)
			right_size = binary_tree_size(tree->right);
		return (left_size + right_size + 1);
	}
}
