using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.GofmanDV.Sprint1.Task2.V5.Lib;
namespace Tyuiu.GofmanDV.Sprint1.Task2.V5.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void TestMethod1()
        {
            DataService ds = new DataService();
            int res = ds.CalculateSideSquare(4);

            Assert.AreEqual(32, res);
        }
    }
}