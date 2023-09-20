#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Sprint1.Task2.V3.Lib/Tyuiu.GofmanDV.Sprint1.Task2.V3.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuDudkovIESprint1Task2V3Test
{
	TEST_CLASS(TyuiuDudkovIESprint1Task2V3Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//Init 
			ISprint1Task2* date = new Service();
			int num = 134;
			int A = 8;
			bool sum;
			//run
			sum = date->LogicLong(num, A);


			//Valid	
			Assert::AreEqual(true, sum);

		}
	};
}