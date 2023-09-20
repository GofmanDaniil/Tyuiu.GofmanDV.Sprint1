// Tyuiu.GofmanDV.Sprint1.Task2.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GofmanDV.Sprint1.Task2.V3.Lib/Tyuiu.GofmanDV.Sprint1.Task2.V3.Lib.cpp"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");

	//Init 
	ISprint1Task2* date = new Service();
	cout << "¬ведите число A" << endl;

	int num;
	int A;
	cin >> num >> A;
	bool sum;
	//run
	sum = date->LogicLong(num, A);


	//Valid	
	if (sum)
		cout << "—умма чисел кратна числу A" << endl;
	else
		cout << "—умма чисел не кратна числу A" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
