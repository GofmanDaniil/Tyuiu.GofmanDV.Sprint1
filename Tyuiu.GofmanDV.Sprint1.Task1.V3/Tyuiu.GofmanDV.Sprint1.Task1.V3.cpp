// Tyuiu.GofmanDV.Sprint1.Task1.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include "../Tyuiu.GofmanDV.Sprint1.Task1.V3.lib/Tyuiu.GofmanDV.Sprint1.Task1.V3.lib.cpp"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint1Task1* date = new Service;
    int a;
    cout << "Введите число для проверки : \n";
    cin >> a;
    if (a % 2 == 0)
        cout << "Число четное.\n";
    else
        cout << "Число нечетное.\n";
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
