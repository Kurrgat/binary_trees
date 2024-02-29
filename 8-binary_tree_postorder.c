#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree
 * using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *        The value in the node must be passed as a parameter to this function
 *
 * Description: Post-order traversal goes as follows:
 * 1. Traverse the left subtree
 * 2. Traverse the right subtree
 * 3. Visit the root node
 * If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Recursively traverse left subtree */
	binary_tree_postorder(tree->left, func);
	/* Recursively traverse right subtree */
	binary_tree_postorder(tree->right, func);
	func(tree->n); /* Call func with the value of the current node */
}
