#include "gtest/gtest.h"

TEST(TestCaseName, TestNameUno)
{
	EXPECT_FALSE(false);
	ASSERT_TRUE(true);
	SUCCEED();
	ADD_FAILURE();
	FAIL();

}

TEST(TestCaseName, TestName2)
{
	EXPECT_EQ(4,2);
	ASSERT_NE(2,4);
	EXPECT_LT(3,1);
	ASSERT_LE(2,2);
	ASSERT_GT(5,1);

}

TEST(TestCaseName, TestName3)
{
	EXPECT_GE(3,2);
	ASSERT_STREQ("HOLA","HOLA");
	EXPECT_STRNE("adios","adios");
	ASSERT_STRCASEEQ("holi","holi");
	EXPECT_STRCASENE("holi","holi");

}

TEST(TestCaseName, TestName4)
{
	ASSERT_FLOAT_EQ(2.2,2.2);
	ASSERT_DOUBLE_EQ(3.1,3.1);
	EXPECT_NEAR(2.2,2.3,.4);
}


