#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../pr_05_1/pr_05_1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestFuncG)
		{
			double a = 2.0;
			double b = 3.0;
			double result = g(a, b);
			double expected = sin(a * b) / (a * a + b * b);
			Assert::AreEqual(expected, result, 0.0001);
		}

		TEST_METHOD(TestMain)
		{
			double s = 2.0;
			double t = 3.0;
			double d = (g(s * s, t + 1) + g(t * t, s + 1)) / (1 + g(s + t, s * t) * g(s + t, s * t));
			double expected = (g(s * s, t + 1) + g(t * t, s + 1)) / (1 + g(s + t, s * t) * g(s + t, s * t));
			Assert::AreEqual(expected, d, 0.0001);
		}
	};
}
