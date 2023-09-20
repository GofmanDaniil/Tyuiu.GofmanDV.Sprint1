// Tyuiu.GofmanDV.Sprint1.Task2.V3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service : public ISprint1Task2
{
	virtual bool LogicLong(int num, int A)
	{
		int sum = 0;
		while (num > 0)
		{
			sum += num % 10;
			num /= 10;
		}
		if (sum % A == 0)
			return true;

		return false;
	}
};
