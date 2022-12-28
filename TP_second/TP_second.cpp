#include "pch.h"
#include "CppUnitTest.h"
#include "../Test/Testing.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TPsecond
{
	TEST_CLASS(TPsecond)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			bool n = is_prime(3);
			Assert::IsTrue(n == true);
		}
		TEST_METHOD(Test2)
		{
			bool n = is_prime(4);
			Assert::IsTrue(n == false);
		}
		TEST_METHOD(Test3)
		{
			bool n = is_prime(10000000000000000000);
			Assert::IsTrue(n == false);
		}
	};
}
