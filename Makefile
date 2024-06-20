CXX = c++

all: binary_tree graphs sorting_algorithms

binary_tree:
	$(CXX) -o $@ $@.cpp

graphs:
	$(CXX) -o $@ $@.cpp

sorting_algorithms:
	$(CXX) -o $@ $@.cpp

