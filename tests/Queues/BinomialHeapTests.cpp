#include "../../src/Queues/BinomialHeap.h"
#include "gtest/gtest.h"


TEST(BinomialHeap_Tests, Test_Size_ExpectEqual) {
    BinomialHeap<int> heap;
    auto actual = heap.size();
    unsigned int expected = 0;
    ASSERT_EQ(expected, actual);
}

TEST(BinomialHeap_Tests, Test_Empty_ExpectTrue) {
    BinomialHeap<int> heap;
    ASSERT_TRUE(heap.empty());
}

TEST(BinomialHeap_Tests, Test_Empty_ExpectFalse) {
    BinomialHeap<int> heap;
    //insert one element
    ASSERT_FALSE(heap.empty());
}