#include "GraphAlgorithms.h"
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>

namespace GraphAlgorithms {

	std::vector<std::string> greedy_heuristic (WeightedAdjacencyList weighted_adjacency_list, std::string node) {
		std::vector<std::string> visited;
		std::string curr_node = node;
		std::string next_node;
		while (true) {
			visited.push_back(curr_node);		
			next_node = "";
			for (auto i=weighted_adjacency_list[curr_node].begin(); i!=weighted_adjacency_list[curr_node].end(); ++i) {
				auto j = std::find(visited.begin(), visited.end(), i->first);
				if (j == visited.end()) {
					if (!next_node.empty()) {
						if (weighted_adjacency_list[curr_node][i->first] < weighted_adjacency_list[curr_node][next_node]) {
							next_node = i->first;
						}
					} else {
						next_node = i->first;
					}
				}
			}
			if (next_node.empty()) {
				return visited;
			}
			curr_node = next_node;
		}
	}

}

