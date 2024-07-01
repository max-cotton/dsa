#include "SortingAlgorithms.h"
#include <algorithm>

template <typename T>
std::vector<T> operator + (const std::vector<T>& a, const std::vector<T>& b) {
	std::vector<T> result = a;
	result.insert(result.end(), b.begin(), b.end());
	return result;
}

namespace SortingAlgorithms {
	void bubble_sort (std::vector<int>& numbers) {
		bool swapping = true;
		while (swapping) {
			swapping = false;
			for (int i=0; i<static_cast<int> (numbers.size()) - 1; i++) {
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
		for (int i=1; i<static_cast<int> (numbers.size()); i++) {
			inserting = true;
			for (int j=0; j<static_cast<int> (ordered_numbers.size()); j++) {
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

	std::vector<int> quick_sort (std::vector<int> numbers) {
		int pivot = numbers.size() - 1;
		std::vector<int> less, equal, more;
		for (int i=0; i<pivot; i++) {
			if (numbers[i] < numbers[pivot]) {
				less.push_back(numbers[i]);
			}
			else if (numbers[i] > numbers[pivot]) {
				more.push_back(numbers[i]);
			}
			else if (numbers[i] == numbers[pivot]) {
				equal.push_back(numbers[i]);
			}
		}
		if (less.size() > 1) {
			less = quick_sort(less);
		}
		if (more.size() > 1) {
			more = quick_sort(more);
		}
		return less + std::vector<int>{numbers[pivot]} + equal + more;
	}
}

