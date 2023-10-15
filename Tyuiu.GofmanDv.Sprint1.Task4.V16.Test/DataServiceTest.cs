using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.GofmanDV.Sprint1.Task4.V16.Lib;
namespace Tyuiu.GofmanDV.Sprint1.Task4.V16.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void TestMethod1()
        {
            DataService ds = new DataService();
            double res = ds.Calculate(1);

            Assert.AreEqual(0.200, res, 0.001);
        }
    }
}