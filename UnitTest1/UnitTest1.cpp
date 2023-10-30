#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_6.3.IT/6.3_IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			int g = Audit(a, 10);

			Assert::AreEqual(g, 0);

		}
	};
}
