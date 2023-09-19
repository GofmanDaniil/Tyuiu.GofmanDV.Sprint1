#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Sprint1.Task0.V3.lib/Tyuiu.GofmanDV.Sprint1.Task0.V3.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V01* date = new Service();
			int a = 4;
			int b = 3;
			int c = 8;
			int rezult;

			rezult = date->Rezalt(a, b, c);

			Assert::AreEqual(112, rezult);

		}
	};
}