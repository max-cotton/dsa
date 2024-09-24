#ifndef SEARCHING_ALGORITHMS_H
#define SEARCHING_ALGORITHMS_H

#include <iostream>
#include <vector>

namespace SearchingAlgorithms {

	// Find index of number in ordered vector of numbers
	//
	// @param numbers vector of ordered numbers
	// @param number the number in numbers to find the index of
	// @param low the lower index of search area
	// @param high the higher index of search area
	void binary_search (std::vector<int>& numbers, int number, int low, int high);

}

#endif

