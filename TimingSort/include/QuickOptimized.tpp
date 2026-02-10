#include "QuickOptimized.hpp"
#include "InsertionSort.hpp" // Include the InsertionSort header
#include <utility>
#include <algorithm>
#include <random>
#include <cassert>

template<typename T>
void QuickOptimized<T>::sort(std::vector<T>& data) {
    if (!data.empty()) {
        quicksortHelper(data, 0, static_cast<int>(data.size()) - 1);
    }
}

template<typename T>
void QuickOptimized<T>::quicksortHelper(std::vector<T>& data, int lo, int hi) {
    // TODO: implement quicksort recursive helper

    // TODO: choose pivot based on pivotChoice


    // Partition using Hoare's method


    // Recursively sort the partitions

}

template<typename T>
int QuickOptimized<T>::partition(std::vector<T>& data, int lo, int hi) {
    // TODO: implement Hoare's partitioning scheme

}

template<typename T>
T QuickOptimized<T>::medianOfThree(std::vector<T>& data, int lo, int hi) {
    // TODO: implement median-of-three pivot selection

}

template<typename T>
T QuickOptimized<T>::randomPivot(std::vector<T>& data, int lo, int hi) {
    // TODO: implement random pivot selection

}   

template<typename T>
T QuickOptimized<T>::choosePivot(std::vector<T>& data, int lo, int hi) {
    // TODO: choose pivot based on pivotChoice
    // default to "LO" if unrecognized or empty


}
