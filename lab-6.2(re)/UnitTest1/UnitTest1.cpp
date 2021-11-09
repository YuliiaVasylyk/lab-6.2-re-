#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-6.2(re)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4 };
			int min = 0;
			int n = Min(a, 4, min, 0);
			Assert::AreEqual(n, 0);

		}
	};
}
