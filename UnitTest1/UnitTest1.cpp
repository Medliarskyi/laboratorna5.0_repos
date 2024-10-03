#include "pch.h"
#include "CppUnitTest.h"
#include "../lab51/lab51.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			double result = g(2,3) ;
			Assert::AreEqual(result, -0.0214935, 0.00341);
		}
	};
}
