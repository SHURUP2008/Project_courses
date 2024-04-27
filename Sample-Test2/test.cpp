#include "pch.h"
#include "../Project5/mathFunc.cpp"

TEST(TestCaseName, TestInt) {
	ASSERT_EQ(1, factorial(0));
}
TEST(TestCaseName, TestFloat) {
	ASSERT_FLOAT_EQ(2.5, divAtoB(5.0, 2.0));
}
TEST(TestCaseName, TestBool) {
	ASSERT_EQ(1, isPositive(5));
}
TEST(TestCaseName, TestString) {
	std::string str = "12345";
	std::string res = "54321";
	ASSERT_TRUE(res == reverseStr(str));
}