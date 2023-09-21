// Tyuiu.GofmanDV.Sprint1.Task3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service : public  ISprint1Task1
{
	virtual int Logic(int a) override
	{
		int aa = a;
		if (aa % 2 == 0 && aa != 1000)
		{
			if (aa % 4 == 0)
			{
				aa *= 2;
			}
		}
		else
			aa /= 5;
		return aa;
	}
};
