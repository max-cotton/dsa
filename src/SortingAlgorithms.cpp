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

	void insertion_sort (std::vector<int>& numbers) {
		std::vector<int> ordered_numbers = {numbers[0]};
		bool inserting;
		for (int i=1; i<numbers.size(); i++) {
			inserting = true;
			for (int j=0; j<ordered_numbers.size(); j++) {
				if (numbers[i] <= ordered_numbers[j]) {
					ordered_numbers.insert(ordered_numbers.begin() + j, numbers[i]);
					inserting = false;
					break;
				}
			}
			if (inserting) {
				ordered_numbers.push_back(numbers[i]);
			}
		}
		numbers = ordered_numbers;
	}
}

