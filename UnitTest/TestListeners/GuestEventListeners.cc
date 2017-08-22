#include "gtest/gtest.h"
#include <iostream>
#include <fstream>

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestEventListeners;
using ::testing::TestPartResult;
using ::testing::TestInfo;
using ::testing::TestCase;
using namespace std;


class EventListener: public EmptyTestEventListener
{
	ofstream log;
public:
	virtual void OnTestProgramStart(const UnitTest&)
	{
		log.open("log.txt");
		log << "Holi. Bienvenido.\n";

	}

	virtual void OnTestPartResult(const TestPartResult& tpr)
	{
		
		log << "falló la prueba, algo hiciste mal";
		log << "linea del error:" << tpr.line_number()<< endl;
		log << tpr.message();
	}

	virtual void OnTestStart(const TestInfo& inf)
	{
		log << "TestCase: " << inf.test_case_name() <<endl;
		log << "TestName: " <<inf.name()<< endl;

	}

	virtual void OnTestEnd(const TestInfo& inf)
	{
		log << "\nEl tiempo de ejecución de NAME fue: " << inf.result()->elapsed_time() <<endl;

	}

	virtual void OnTestProgramEnd(const UnitTest& final)
	{
		log << "El numero de tests ejecutados fue: " <<final.total_test_count()<<endl;
		log << "correctos: " << final.successful_test_count()<<endl;
		log << "incorrectos:" <<final.failed_test_count() <<endl;

	}
	

};

TEST(TcnUno, tname)
{
	ASSERT_EQ(1,-1);
}

int main(int argc, char**argv)
{
	InitGoogleTest(&argc,argv);
	TestEventListeners& listeners =UnitTest::GetInstance()->listeners();
	delete listeners.Release(listeners.default_result_printer());
	listeners.Append(new EventListener);
	return RUN_ALL_TESTS();
}
