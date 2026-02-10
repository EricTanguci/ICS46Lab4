#include "MergeOptimized.hpp"
#include <algorithm> // For std::copy

template<typename T>
void MergeOptimized<T>::sort(std::vector<T>& data) {
    if (data.empty()) {
        return;
    }

    std::vector<T> aux(data.size()); // Auxiliary array for merging
    mergeSortHelper(data, aux, 0, static_cast<int>(data.size()) - 1);
}

template<typename T>
void MergeOptimized<T>::mergeSortHelper(std::vector<T>& data, std::vector<T>& aux, int lo, int hi) {
    // TODO: implement merge sort

    // TODO: Use InsertionSort for small subarrays

    // Sort left half
    // Sort right half
    // Merge the two halves
}

template<typename T>
void MergeOptimized<T>::merge(std::vector<T>& data, std::vector<T>& aux, int lo, int mid, int hi) {
    // TODO: implement merge
    // Copy data to auxiliary array

    // Left half exhausted    
    // Right half exhausted
     
    // Right element is smaller
    // Left element is smaller
        
    
}

