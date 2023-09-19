#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Sprint1.Task1.V3.lib/Tyuiu.GofmanDV.Sprint1.Task1.V3.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* date = new Service();
			int a = 4;
			int proverka;

			proverka = date->Logic(a);

			Assert::AreEqual(4, proverka);

		}
	};
}
