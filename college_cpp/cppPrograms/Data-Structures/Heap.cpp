#include <iostream>
#include <vector>
#include <algorithm>

class MinHeap {
private:
    std::vector<int> heap;

public:
    void insert(int value) {
        heap.push_back(value);
        std::push_heap(heap.begin(), heap.end(), std::greater<int>());
    }

    int extractMin() {
        if (!heap.empty()) {
            int minVal = heap.front();
            std::pop_heap(heap.begin(), heap.end(), std::greater<int>());
            heap.pop_back();
            return minVal;
        }
        std::cout << "Heap is empty!" << std::endl;
        return -1; // Assuming -1 represents an empty heap
    }

    bool isEmpty() {
        return heap.empty();
    }
};
