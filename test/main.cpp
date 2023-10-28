#include <iostream>
#include <gtest/gtest.h>
#include "./../src/graph.h"

// using namespace GRAPHDEF;
GRAPHDEF::Graph<int> a;
GRAPHDEF::Graph<int> b;

TEST(obj_eq, graphEQ) {
        EXPECT_EQ(true, a==b);
        EXPECT_EQ(true, b==a);
}

int main(int argc, char **argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}


