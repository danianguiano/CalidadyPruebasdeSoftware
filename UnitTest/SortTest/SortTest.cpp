#include "gtest/gtest.h"
#include <iostream>
#include "Hierarchie.h"

template<class T>
class Fixture : public ::testing::Test
{
public:
	void SetUp()
	{
		parent= new T;
	}
	void TearDown()
	{
		delete parent;
	}
	Parent* parent;
};

typedef ::testing::Types<Child1, Child2, Child3> implementations;
TYPED_TEST_CASE(Fixture, implementations);


int a[] = {8,7,3,5,2,9};
TYPED_TEST(Fixture, implementations)
{
	this->parent->bubbleSort(a);
	this->parent->selectionSort(a);
	this->parent->insertionSort(a);
}
