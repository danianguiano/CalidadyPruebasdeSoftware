#include "gtest/gtest.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "Scanner.h"

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestEventListeners;
using ::testing::TestPartResult;
using ::testing::TestInfo;
using ::testing::TestCase;
using ::testing::Values;
using ::testing::ValuesIn;
using namespace std;


class EventListener: public EmptyTestEventListener
{
public:
  ofstream outputFile;

  virtual void OnTestProgramStart(const UnitTest& inicio)
  {
  	outputFile.open("evaluacionTest.txt");
    printf("Prueba para Evaluación 1 \n");
    outputFile << "Inicio de Pruebas" << endl;
  }

  virtual void OnTestProgramEnd(const UnitTest& final)
  {
  	outputFile << "El numero de tests ejecutados fue: " <<final.total_test_count()<<endl;
    outputFile << "Correctos: " << final.successful_test_count() << endl;
    outputFile << "Fallidos: " << final.failed_test_count() << endl;
    outputFile.close();
  }

class Fixture : public ::testing::TestWithParam<int>
{
public:
  Scanner * s;

  void SetUp()
  {
    s = new Scanner;
    s->puertos();
  }

  void TearDown()
  {
    delete s;
  }
};

TEST_P(Fixture, t1)
{
  EXPECT_TRUE(s->exitePuerto(GetParam()));
}

INSTANTIATE_TEST_CASE_P(enteros, Fixture, Values(22,80,443,631,3306,68));

int a[] = {22,80,442,631,3306,68};
INSTANTIATE_TEST_CASE_P(enteros2, Fixture, ValuesIn(a));

int main(int argc, char**argv)
{
    InitGoogleTest(&argc,argv);
    TestEventListeners& listeners =UnitTest::GetInstance()->listeners();
    delete listeners.Release(listeners.default_result_printer());
    listeners.Append(new EventListener);
    return RUN_ALL_TESTS();
}
