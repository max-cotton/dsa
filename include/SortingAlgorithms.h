#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include <vector>

template <typename T>
std::vector<T> operator + (const std::vector<T>& a, const std::vector<T>& b);

namespace SortingAlgorithms {

	void bubble_sort (std::vector<int>& numbers);
	void insertion_sort (std::vector<int>& numbers);
	std::vector<int> quick_sort (std::vector<int> numbers);

}

#endif

