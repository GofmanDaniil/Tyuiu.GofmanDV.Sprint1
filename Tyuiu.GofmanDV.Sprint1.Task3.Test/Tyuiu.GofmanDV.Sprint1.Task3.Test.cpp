#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Sprint1.Task3.Lib/Tyuiu.GofmanDV.Sprint1.Task3.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGofmanDVSprint1Task3V0Test
{
	TEST_CLASS(TyuiuGofmanDVSprint1Task3V0Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//Init 
			ISprint1Task1* date = new Service();
			int a = 4288;
			int result;
			//run
			result = date->Logic(a);


			//Valid	
			Assert::AreEqual(8576, result);

		}
	};
}
