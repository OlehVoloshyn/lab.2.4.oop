#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.2.4/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector a,b;
			b.AddElem(1);
			b.AddElem(1);
			//b.Norma();
			Assert::AreEqual(b.Norma(), sqrt(2));
		}
	};
}
