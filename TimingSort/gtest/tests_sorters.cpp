#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

#include "InsertionSort.hpp"
#include "SelectionSort.hpp"
#include "QuickOptimized.hpp"
#include "MergeOptimized.hpp"

namespace {
    bool is_sorted(const std::vector<int>& v) {
        return std::is_sorted(v.begin(), v.end());
    }
}

// Test for InsertionSort
TEST(InsertionSort, SortsCorrectly) {
    InsertionSort<int> sorter;

    std::vector<int> data{5, 2, 4, 6, 1, 3};
    sorter.sort(data);
    EXPECT_TRUE(is_sorted(data));
    EXPECT_EQ(data, (std::vector<int>{1, 2, 3, 4, 5, 6}));

    std::vector<int> empty;
    sorter.sort(empty);
    EXPECT_TRUE(is_sorted(empty));

    std::vector<int> single{42};
    sorter.sort(single);
    EXPECT_TRUE(is_sorted(single));
}

// Test for SelectionSort
TEST(SelectionSort, SortsCorrectly) {
    SelectionSort<int> sorter;

    std::vector<int> data{64, 25, 12, 22, 11};
    sorter.sort(data);
    EXPECT_TRUE(is_sorted(data));
    EXPECT_EQ(data, (std::vector<int>{11, 12, 22, 25, 64}));

    std::vector<int> empty;
    sorter.sort(empty);
    EXPECT_TRUE(is_sorted(empty));

    std::vector<int> single{42};
    sorter.sort(single);
    EXPECT_TRUE(is_sorted(single));
}

// Test for MergeOptimized: merge function
TEST(MergeOptimized, MergeWorksCorrectly) {
    MergeOptimized<int> sorter;

    std::vector<int> data{1, 3, 5, 7, 0, 2, 4, 6};
    std::vector<int> aux(data.size());
    sorter.merge(data, aux, 0, 3, 7);
    EXPECT_TRUE(is_sorted(data));
    EXPECT_EQ(data, (std::vector<int>{0, 1, 2, 3, 4, 5, 6, 7}));
}

// Test for MergeOptimized: sort function
TEST(MergeOptimized, SortsCorrectly) {
    MergeOptimized<int> sorter;

    std::vector<int> data{38, 27, 43, 3, 9, 82, 10};
    sorter.sort(data);
    EXPECT_TRUE(is_sorted(data));
    EXPECT_EQ(data, (std::vector<int>{3, 9, 10, 27, 38, 43, 82}));

    std::vector<int> empty;
    sorter.sort(empty);
    EXPECT_TRUE(is_sorted(empty));

    std::vector<int> single{42};
    sorter.sort(single);
    EXPECT_TRUE(is_sorted(single));
}

// Test for QuickOptimized: final state on varied inputs
TEST(QuickOptimized, SortsCorrectly) {
    QuickOptimized<int> sorter;

    std::vector<int> data{3, 7, 8, 5, 2, 1, 9, 5, 4};
    sorter.sort(data);
    EXPECT_TRUE(is_sorted(data));
    EXPECT_EQ(data, (std::vector<int>{1, 2, 3, 4, 5, 5, 7, 8, 9}));

    std::vector<int> empty;
    sorter.sort(empty);
    EXPECT_TRUE(is_sorted(empty));

    std::vector<int> single{42};
    sorter.sort(single);
    EXPECT_TRUE(is_sorted(single));
}

// Performance tests

