#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project5.1(D)\Project5.1(D)\Pair.cpp"
#include "D:\Study\ООП\Project5.1(D)\Project5.1(D)\Pair.h"
#include "D:\Study\ООП\Project5.1(D)\Project5.1(D)\Complex.cpp"
#include "D:\Study\ООП\Project5.1(D)\Project5.1(D)\Complex.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			Complex b(2, 2);
			Complex c(2, 2);
			a = (b == c);
			Assert::IsTrue(a);
		}
	};
}
