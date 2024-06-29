#include "SortingAlgorithms.h"
#include <algorithm>

namespace SortingAlgorithms {
	void bubble_sort (std::vector<int>& numbers) {
		bool swapping = true;
		while (swapping) {
			swapping = false;
			for (int i=0; i<numbers.size() - 1; i++) {
				if (numbers[i] > numbers[i + 1]) {
					std::swap(numbers[i], numbers[i + 1]);
					swapping = true;
				}
			}
		}
	}
}

