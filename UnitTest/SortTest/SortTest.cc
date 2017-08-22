#include "gtest/gtest.h"
#include <iostream>
#include "Hierarchie.h"

template<class T>
class Fixture : public ::testing::Test
{
public:
	Sort* sortTest;
	void SetUp()
	{
		sortTest= new T;
	}
	void TearDown()
	{
		delete sortTest;
	}

};

typedef ::testing::Types<bubbleSort, selectionSort, insertionSort> implementations;
TYPED_TEST_CASE(Fixture, implementations);


TYPED_TEST(Fixture, implementations)
{

	int a[] = {8,7,3,5,2,9};
	int b[]={2,3,5,7,8,9};
	int i= 6;
	this->sortTest->doSomething(a,i);

};

TYPED_TEST_CASE(Fixture, implementations)
{
	EXPECT_TRUE(a==b);
};


