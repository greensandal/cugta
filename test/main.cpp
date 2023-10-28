#include <iostream>
#include <gtest/gtest.h>
#include "./../src/graph.h"

using namespace GRAPHDEF;
Graph<Mod_vec<int>> a;
Graph<Mod_vec<int>> b;

std::vector<std::vector<int>> gt = {
        {0,2,-1,-1,10},
        {-1,0,3,-1,7},
        {4,-1,0,4,-1},
        {-1,-1,-1,0,5},
        {-1,-1,3,-1,0}
};
Mod_vec<int> t(gt);
Graph<Mod_vec<int>> c(t);

TEST(obj_eq, graphEQ) {
        EXPECT_EQ(true, a==b);
        EXPECT_EQ(true, b==a);
        EXPECT_NE(true, a==c);
        EXPECT_NE(true, b==c);
}

int main(int argc, char **argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}


