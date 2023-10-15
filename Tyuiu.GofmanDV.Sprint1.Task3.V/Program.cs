using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Tyuiu.GofmanDV.Sprint1.Task3.V6.Lib;
namespace Tyuiu.GofmanDV.Sprint1.Task3.V6
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите расстояние, расход бензина и его стоимость");
            double distance;
            double gasFlow;
            double gasPrice;
            distance = double.Parse(Console.ReadLine());
            gasFlow = double.Parse(Console.ReadLine());
            gasPrice = double.Parse(Console.ReadLine());

            DataService ds = new DataService();
            Console.Title = "Спринт #1 | Выполнил: Гофман Д. В. | СМАРТб-23-1";
            Console.WriteLine("***************************************************************************");
            Console.WriteLine("* Спринт #1                                                               *");
            Console.WriteLine("* Тема:  1.3 Операторы составного присваивания                            *");
            Console.WriteLine("* Задание #3                                                              *");
            Console.WriteLine("* Вариант #7                                                              *");
            Console.WriteLine("* Выполнил: Гофман Даниил Викторович | СМАРТб-23-1                         *");
            Console.WriteLine("***************************************************************************");
            Console.WriteLine("* УСЛОВИЕ:                                                                *");
            Console.WriteLine("* Написать программу, которая запрашивает у пользователя исходные данные,  *");
            Console.WriteLine("* выполняет указанные расчёты и печатает результат на экране.,          *");
            Console.WriteLine("*                                                                         *");
            Console.WriteLine("***************************************************************************");
            Console.WriteLine("* ИСХОДНЫЕ ДАННЫЕ:                                                        *");
            Console.WriteLine("***************************************************************************");

            Console.WriteLine(distance);
            Console.WriteLine(gasFlow);
            Console.WriteLine(gasPrice);

            Console.WriteLine("***************************************************************************");
            Console.WriteLine("* РЕЗУЛЬТАТ:                                                              *");
            Console.WriteLine("***************************************************************************");

            Console.WriteLine(ds.TravelCost(distance, gasFlow, gasPrice));



            Console.ReadKey();
        }
    }
}