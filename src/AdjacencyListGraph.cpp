#include <AdjacencyListGraph.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string>

AdjacencyListGraph::AdjacencyListGraph (std::unordered_map<std::string, std::vector<std::string>> nodes) {
	this->nodes = nodes;
}

void AdjacencyListGraph::breadth_first_traversal (std::string node) {
	std::queue<std::string> queue;
	queue.push(node);
	visited.push_back(node);
	while (queue.size() > 0) {
		node = queue.front();
		queue.pop();
		std::cout << node << std::endl;
		for (std::string adjacent : nodes[node]) {
			auto i = std::find(visited.begin(), visited.end(), adjacent);
			if (i == visited.end()) {
				queue.push(adjacent);
				visited.push_back(adjacent);
			}
		}
	}
}

void AdjacencyListGraph::traverse (std::string traversal_type) {
	visited = {};
	if (traversal_type == std::string ("breadth")) {
		std::cout << std::string ("Breadth First Traversal:") << std::endl;
		breadth_first_traversal(std::string ("A"));
	}
	visited = {};
}

