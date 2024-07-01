#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include <vector>

template <typename T>
std::vector<T> operator + (const std::vector<T>& a, const std::vector<T>& b);

namespace SortingAlgorithms {

	// Sort list of numbers by repetitively swapping pairs of numbers if out 
    // of order until no more swaps are needed. Time Complexity: O(n^2)
	//
	// @param numbers vectors of numbers to be sorted
	void bubble_sort (std::vector<int>& numbers);

	// Sort list of numbers by iterating through sorted list and inserting 
    // where number fits between two elements. Time Complexity: O(n^2)
	//
	// @param numbers vectors of numbers to be sorted
	void insertion_sort (std::vector<int>& numbers);

	// Sort list of numbers by moving all values less than a pivot to the left 
    // and all value greater to the right. Then make each side of the pivot into 
    // subarrays and repeat the process. Finally join together the subarrays.
	// Divide and Conquer strategy with Time Complexity of O(nlogn)
	//
	// @param numbers list of numbers to be sorted
	// @return vector of sorted numbers
	std::vector<int> quick_sort (std::vector<int> numbers);

}

#endif

