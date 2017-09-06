#include <gtest/gtest.h>

TEST(dynamic_bitset, default_constructor)
{
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}