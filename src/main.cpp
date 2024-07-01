#include "AdjacencyListGraph.h"
#include "BinaryTree.h"
#include "GraphAlgorithms.h"
#include "SortingAlgorithms.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main (int argc, char* argv []) {
	AdjacencyListGraph adjacency_list_graph (AdjacencyList ({{"A", {"D", "B"}},
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
	std::cout << std::endl;

	WeightedAdjacencyList weighted_adjacency_list ({{"s",{{"a",8},{"b",4}}},
												   {"a",{{"b",4}}},
												   {"b",{{"a",3},{"c",2},{"d",5}}},
												   {"c",{{"d",2}}},
												   {"d",{}}});
	std::cout << std::string ("Greedy Heuristic:") << std::endl;
	std::vector<std::string> visited = GraphAlgorithms::greedy_heuristic(weighted_adjacency_list, std::string ("s"));
	for (std::string i : visited) {
		std::cout << i << std::endl;
	}
	std::cout << std::endl;

	std::vector<int> numbers = {4, 1, 19, 10, -3, 0, 2, 7, 8, 15, 9};
	std::vector<int> sorted_numbers = SortingAlgorithms::quick_sort(numbers);
	std::cout << std::string ("Sorted numbers:") << std::endl;
	for (int number : sorted_numbers) {
		std::cout << number << std::endl;
	}

	return 0;
}

