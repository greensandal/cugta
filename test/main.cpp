#include <iostream>
#include <gtest/gtest.h>
#include "./../src/graph.h"

T_Graph a;
T_Graph b;

TEST(obj_eq, graphEQ) {
        EXPECT_EQ(true, a==b);
        EXPECT_EQ(true, b==a);
}

int main(int argc, char **argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}


