#include "BinaryTree.h"
#include "AdjacencyListGraph.h"
#include "sorting_algorithms.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main (int argc, char* argv []) {
	AdjacencyListGraph adjacency_list_graph (std::unordered_map<std::string, std::vector<std::string>> ({{"A", {"D", "B"}},
				  {"B", {"A", "E", "C", "F"}},
				  {"C", {"B", "F"}},
				  {"D", {"A", "E"}},
				  {"E", {"D", "B"}},
				  {"F", {"B", "C"}}
			      }));
	adjacency_list_graph.traverse(std::string ("breadth"));
	std::cout << std::endl;
	adjacency_list_graph.traverse(std::string ("depth"));
	std::cout << std::endl;

	BinaryTree binary_tree (std::vector<int> {10, 4, 17, 3, 8, 11, 18},
							std::vector<int> {1, 3, 5, -1, -1, -1, -1},
							std::vector<int> {2, 4, 6, -1, -1, -1, -1});
	std::cout << std::string ("Preorder traversal:") << std::endl;
	binary_tree.preorder_traversal(0);
	std::cout << std::endl;
	std::cout << std::string ("Inorder traversal:") << std::endl;
	binary_tree.inorder_traversal(0);
	std::cout << std::endl;
	std::cout << std::string ("Postorder traversal:") << std::endl;
	binary_tree.postorder_traversal(0);

	return 0;
}

