﻿using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.GofmanDV.Sprint1.Task3.V6.Lib;
namespace Tyuiu.GofmanDV.Sprint1.Task3.V6.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void TestMethod1()
        {
            DataService ds = new DataService();
            double res = ds.TravelCost(67, 8.5, 6.5);
            Assert.AreEqual(74.035, res, 0.001);
        }
    }
}