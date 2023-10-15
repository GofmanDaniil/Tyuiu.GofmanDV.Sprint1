using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.GofmanDV.Sprint1.Task1.V27.Lib;

namespace Tyuiu.GofmanDV.Sprint1.Task1.V27.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void TestMethod1()
        {
            DataService ds = new DataService();
            double x = 2;
            double y = 4;
            double res = ds.Calculate(x, y);
            Assert.AreEqual(3, res);
        }
    }
}
