#include <gtest/gtest.h>
#include "commission.h"

TEST(Commission, TC_10_10_10) {
    ASSERT_STREQ("$100", commission(10,10,10));
}

TEST(Commission, TC_9_8_8) {
    ASSERT_STREQ("$84.5", commission(9,8,8));
}

TEST(Commission, TC_12_13_14) {
    ASSERT_STREQ("$142", commission(12,13,14));
}

TEST(Commission, TC_13_14_14) {
    ASSERT_STREQ("$153.25", commission(13,14,14));
}

TEST(Commission, TC_20_20_20) {
    ASSERT_STREQ("$260", commission(20,20,20));
}

TEST(Commission, TC_70_80_90) {
    ASSERT_STREQ("$1420", commission(70,80,90));
}

TEST(Commission, TC_n1_40_45) {
    ASSERT_STREQ("Program terminates", commission(-1,40,45));
}

TEST(Commission, TC_n2_40_45) {
    ASSERT_STREQ("locks not in 1...70", commission(-2,40,45));
}

TEST(Commission, TC_71_40_45) {
    ASSERT_STREQ("locks not in 1...70", commission(71,40,45));
}

TEST(Commission, TC_35_n1_45) {
    ASSERT_STREQ("stocks not in 1...80", commission(35,-1,45));
}

TEST(Commission, TC_35_81_45) {
    ASSERT_STREQ("stocks not in 1...80", commission(35,81,45));
}

TEST(Commission, TC_35_40_n1) {
    ASSERT_STREQ("barrels not in 1...90", commission(35,40,-1));
}

TEST(Commission, TC_35_40_91) {
    ASSERT_STREQ("barrels not in 1...90", commission(35,40,91));
}

int main(int argc, char** argv) {
        testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
