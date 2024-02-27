#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *        The value in the node must be passed as a parameter to this function
 *
 * Description: In-order traversal goes as follows:
 * 1. Traverse the left subtree
 * 2. Visit the root node
 * 3. Traverse the right subtree
 * If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_inorder(tree->left, func); /* Recursively traverse left subtree */
    func(tree->n); /* Call func with the value of the current node */
    binary_tree_inorder(tree->right, func); /* Recursively traverse right subtree */
}
