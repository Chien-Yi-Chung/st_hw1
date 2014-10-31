#include <gtest/gtest.h>
#include "func_triangle.h"

TEST(Triangle, TC_1_1_1) {
    ASSERT_EQ(EQUILATERAL, triangle(1, 1, 1));
}

TEST(Triangle, TC_2_2_3) {
    ASSERT_EQ(ISOSCELES, triangle(2, 2, 3)); 
}

TEST(Triangle, TC_3_4_5) {
    ASSERT_EQ(SCALENE, triangle(3, 4, 5));
}

TEST(Triangle, TC_4_1_2) {
    ASSERT_EQ(NOT_A_TRIANGLE, triangle(4, 1, 2)); 
}

TEST(Triangle, TC_n1_5_5) {
    ASSERT_EQ(VAL_A_OUTRANGE, triangle(-1, 5, 5));
}

TEST(Triangle, TC_5_n1_5) {
    ASSERT_EQ(VAL_B_OUTRANGE, triangle(5, -1, 5)); 
}

TEST(Triangle, TC_5_5_n1) {
    ASSERT_EQ(VAL_C_OUTRANGE, triangle(5, 5, -1));
}

TEST(Triangle, TC_201_5_5) {
    ASSERT_EQ(VAL_A_OUTRANGE, triangle(201, 5, 5)); 
}

TEST(Triangle, TC_5_201_5) {
    ASSERT_EQ(VAL_B_OUTRANGE, triangle(5, 201, 5));
}

TEST(Triangle, TC_5_5_201) {
    ASSERT_EQ(VAL_C_OUTRANGE, triangle(5, 5, 201)); 
}

TEST(Triangle, TC_n1_n1_5) {
    ASSERT_EQ(VAL_AB_OUTRANGE, triangle(-1, -1, 5)); 
}

TEST(Triangle, TC_5_n1_n1) {
    ASSERT_EQ(VAL_BC_OUTRANGE, triangle(5, -1, -1));
}

TEST(Triangle, TC_n1_5_n1) {
    ASSERT_EQ(VAL_AC_OUTRANGE, triangle(-1, 5, -1)); 
}

TEST(Triangle, TC_n1_n1_n1) {
    ASSERT_EQ(VAL_ABC_OUTRANGE, triangle(-1, -1, -1));
}


int main(int argc, char** argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
