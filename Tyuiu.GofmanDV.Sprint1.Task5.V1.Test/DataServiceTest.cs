using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.GofmanDV.Sprint1.Task5.V1.Lib;
namespace Tyuiu.GofmanDV.Sprint1.Task5.V1.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void TestMethod1()
        {
            DataService ds = new DataService();
            int res = ds.DistanceBetweenDots(1, 1, 2, 2);

            Assert.AreEqual(1, res);
        }
    }
}