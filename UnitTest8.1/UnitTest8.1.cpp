#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1it/lab8.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = {".s..g."};
			int test = FindFourthDotIterative(str);
			Assert::AreEqual(0, test);
		}
	};
}
