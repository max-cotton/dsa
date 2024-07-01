#ifndef GRAPH_ALGORITHMS_H
#define GRAPH_ALGORITHMS_H

#include <unordered_map>
#include <vector>
#include <string>

typedef std::unordered_map<std::string, std::unordered_map<std::string, int>> WeightedAdjacencyList;

namespace GraphAlgorithms {
	
	std::vector<std::string> greedy_heuristic (WeightedAdjacencyList weighted_adjacency_list, std::string node);

}

#endif

