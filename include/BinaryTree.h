#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <vector>

class BinaryTree {
	public:
		BinaryTree (std::vector<int> values, std::vector<int> left_nodes, std::vector<int> right_nodes);
		void preorder_traversal (int node);
		void inorder_traversal (int node);
		void postorder_traversal (int node);
		std::vector<int> values;
		std::vector<int> left_nodes;
		std::vector<int> right_nodes;
};

#endif

