#include "SearchingAlgorithms.h"

namespace SearchingAlgorithms {
	void binary_search (std::vector<int>& numbers, int number, int low, int high) {
		int index = (low + high) / 2;
		if (numbers[index] == number) {
			std::cout << "Index: " << index << std::endl;
		} else if (numbers[index] < number) {
			binary_search(numbers, number, index, high);
		} else if (numbers[index] > number) {
			binary_search(numbers, number, low, index);
		}
	}
}

