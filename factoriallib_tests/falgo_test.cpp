#include "gtest/gtest.h"
#include "falgo.h"

ll factorials[] = {
        1, 1, 2, 6, 24, 120
};

TEST(FactorialAlgoTest, SimpleRecursion) {
    for (ll i = 0; i < 6; i++) {
        EXPECT_EQ(factorials[i], falgo::simple_recursion(i));
    }
}

TEST(FactorialAlgoTest, FactNaive) {
    for (ll i = 0; i < 6; i++) {
        EXPECT_EQ(factorials[i], falgo::fact_naive(i));
    }
}

