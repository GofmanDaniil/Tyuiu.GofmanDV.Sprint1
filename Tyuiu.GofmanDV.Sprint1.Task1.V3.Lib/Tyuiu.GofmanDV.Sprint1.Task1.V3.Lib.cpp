// Tyuiu.GofmanDV.Sprint1.Task1.V3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint1Task1
{
	virtual int Logic(int a) override
	{
		return a;
	}

};