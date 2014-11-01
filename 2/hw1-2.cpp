#include <gtest/gtest.h>
#include "nextDate.h"

TEST(NextDate, TC_1_1_1812) {
    ASSERT_STREQ("1,2,1812", nextdate(1,1,1812));
}

TEST(NextDate, TC_1_1_1813) {
    ASSERT_STREQ("1,2,1813", nextdate(1,1,1813));
}

TEST(NextDate, TC_1_1_1912) {
    ASSERT_STREQ("1,2,1912", nextdate(1,1,1912));
}

TEST(NextDate, TC_1_1_2011) {
    ASSERT_STREQ("1,2,2011", nextdate(1,1,2011));
}

TEST(NextDate, TC_1_1_2012) {
    ASSERT_STREQ("1,2,2012", nextdate(1,1,2012));
}

TEST(NextDate, TC_1_2_1812) {
    ASSERT_STREQ("1,3,1812", nextdate(1,2,1812));
}

TEST(NextDate, TC_1_2_1813) {
    ASSERT_STREQ("1,3,1813", nextdate(1,2,1813));
}

TEST(NextDate, TC_1_2_1912) {
    ASSERT_STREQ("1,3,1912", nextdate(1,2,1912));
}

TEST(NextDate, TC_1_2_2011) {
    ASSERT_STREQ("1,3,2011", nextdate(1,2,2011));
}

TEST(NextDate, TC_1_2_2012) {
    ASSERT_STREQ("1,3,2012", nextdate(1,2,2012));
}

TEST(NextDate, TC_1_15_1812) {
    ASSERT_STREQ("1,16,1812", nextdate(1,15,1812));
}

TEST(NextDate, TC_1_15_1813) {
    ASSERT_STREQ("1,16,1813", nextdate(1,15,1813));
}

TEST(NextDate, TC_1_15_1912) {
    ASSERT_STREQ("1,16,1912", nextdate(1,15,1912));
}

TEST(NextDate, TC_1_15_2011) {
    ASSERT_STREQ("1,16,2011", nextdate(1,15,2011));
}

TEST(NextDate, TC_1_15_2012) {
    ASSERT_STREQ("1,16,2012", nextdate(1,15,2012));
}

TEST(NextDate, TC_1_30_1812) {
    ASSERT_STREQ("1,31,1812", nextdate(1,30,1812));
}

TEST(NextDate, TC_1_30_1813) {
    ASSERT_STREQ("1,31,1813", nextdate(1,30,1813));
}

TEST(NextDate, TC_1_30_1912) {
    ASSERT_STREQ("1,31,1912", nextdate(1,30,1912));
}

TEST(NextDate, TC_1_30_2011) {
    ASSERT_STREQ("1,31,2011", nextdate(1,30,2011));
}

TEST(NextDate, TC_1_30_2012) {
    ASSERT_STREQ("1,31,2012", nextdate(1,30,2012));
}

TEST(NextDate, TC_1_31_1813) {
    ASSERT_STREQ("2,1,1813", nextdate(1,31,1813));
}

TEST(NextDate, TC_1_31_1912) {
    ASSERT_STREQ("2,1,1912", nextdate(1,31,1912));
}

TEST(NextDate, TC_12_31_1912) {
    ASSERT_STREQ("1,1,1913", nextdate(12,31,1912));
}

TEST(NextDate, TC_2_28_1912) {
    ASSERT_STREQ("2,29,1912", nextdate(2,28,1912));
}

TEST(NextDate, TC_2_28_1913) {
    ASSERT_STREQ("3,1,1913", nextdate(2,28,1913));
}


int main(int argc, char** argv) {
        testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
