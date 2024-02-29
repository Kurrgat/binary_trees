#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes,
 *         or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp1 = first;
	const binary_tree_t *temp2 = second;

	if (first == NULL || second == NULL)
		return (NULL);

	while (temp1 != temp2)
	{
		temp1 = temp1->parent;
		temp2 = temp2->parent;

		if (temp1 == NULL)
		{
			temp1 = second;
			while (temp1 != NULL)
			{
				if (temp1 == first)
					return ((binary_tree_t *)first);
				temp1 = temp1->parent;
			}
			return (NULL);
		}

		if (temp2 == NULL)
		{
			temp2 = first;
			while (temp2 != NULL)
			{
				if (temp2 == second)
					return ((binary_tree_t *)second);
				temp2 = temp2->parent;
			}
			return (NULL);
		}
	}

	return ((binary_tree_t *)temp1);
}
