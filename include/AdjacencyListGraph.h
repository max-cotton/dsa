#ifndef ADJACENCYLISTGRAPH_H  // Stops multiple inclusions of header file
#define ADJACENCYLISTGRAPH_H

#include <unordered_map>
#include <vector>
#include <string>

class AdjacencyListGraph {
	public:
		AdjacencyListGraph (std::unordered_map<std::string, std::vector<std::string>> nodes);
		void breadth_first_traversal (std::string node);
		void depth_first_traversal (std::string node);
		void traverse (std::string traversal_type);
		std::unordered_map<std::string, std::vector<std::string>> nodes;
		std::vector<std::string> visited;
};

#endif

