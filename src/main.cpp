#include "binary_tree.h"
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
	return 0;
}

