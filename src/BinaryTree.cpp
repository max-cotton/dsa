#include <BinaryTree.h>
#include <iostream>
#include <vector>

BinaryTree::BinaryTree (std::vector<int> values, std::vector<int> left_nodes, std::vector<int> right_nodes) {
	this->values = values;
	this->left_nodes = left_nodes;
	this->right_nodes = right_nodes;
}

void BinaryTree::preorder_traversal (int node) {
	std::cout << values[node] << std::endl;
	if (left_nodes[node] != -1) {
		preorder_traversal(left_nodes[node]);
	}
	if (right_nodes[node] != -1) {
		preorder_traversal(right_nodes[node]);
	}
}

void BinaryTree::inorder_traversal (int node) {	
	if (left_nodes[node] != -1) {
		inorder_traversal(left_nodes[node]);
	}
	std::cout << values[node] << std::endl;
	if (right_nodes[node] != -1) {
		inorder_traversal(right_nodes[node]);
	}
}

void BinaryTree::postorder_traversal (int node) {
	if (left_nodes[node] != -1) {
		postorder_traversal(left_nodes[node]);
	}
	if (right_nodes[node] != -1) {
		postorder_traversal(right_nodes[node]);
	}
	std::cout << values[node] << std::endl;
}

