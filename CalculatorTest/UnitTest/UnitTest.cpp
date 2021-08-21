#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\86156\Desktop\CodeQuality\CalculatorTest\Calculator\Calculator.h" 
//在其它电脑运行需要修改此处地址(即Calculator待测试项目中的Calculator.h头文件路径
//同时修改测试项目UnitTest-属性-链接器-输入-附加依赖项 将被测试项目中Debug文件夹中的Calculator.obj文件修改为对应地址

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(resultCalculator)
	{
	public:
		Calculator test;

		TEST_METHOD(resultCalculator1)
		{
			double a = rand(), b = rand();
			double exp = a * a;
			double ret = test.resultCalculator(int(1), a, b);
			Assert::AreEqual(exp, ret);
		}

		TEST_METHOD(resultCalculator2)
		{
			double a = rand(), b = rand();
			double exp = 3.1415926535 * a * a;
			double ret = test.resultCalculator(int(2), a, b);
			Assert::AreEqual(exp, ret);
		}

		TEST_METHOD(resultCalculator3)
		{
			double a = rand(), b = rand();
			double exp = a * b;
			double ret = test.resultCalculator(int(3), a, b);
			Assert::AreEqual(exp, ret);
		}

		TEST_METHOD(resultCalculator4)
		{
			double a = rand(), b = rand();
			double exp = 0.5 * a * b;
			double ret = test.resultCalculator(int(4), a, b);
			Assert::AreEqual(exp, ret);
		}

		TEST_METHOD(resultCalculator5)
		{
			double a = rand(), b = rand();
			double exp = a * b;
			double ret = test.resultCalculator(int(5), a, b);
			Assert::AreEqual(exp, ret);
		}

		TEST_METHOD(resultCalculator6)
		{
			double a = rand(), b = rand();
			double exp = 3.1415926535 * a * b;
			double ret = test.resultCalculator(int(6), a, b);
			Assert::AreEqual(exp, ret);
		}
	};
}

namespace UnitTest
{
	TEST_CLASS(resultUnitTransform)
	{
	public:
		Calculator test;

		TEST_METHOD(resultUnitTransform1)
		{
			double a = rand();
			double exp = a;
			double ret = test.resultUnitTransform(int(1), int(1),a);
			Assert::AreEqual(exp, ret);
		}

		TEST_METHOD(resultUnitTransform2)
		{
			double a = rand();
			double exp = a / 2.54 / 2.54;
			double ret = test.resultUnitTransform(int(1), int(2), a);
			Assert::AreEqual(exp, ret);
		}

		TEST_METHOD(resultUnitTransform3)
		{
			double a = rand();
			double exp = a * 2.54 * 2.54;
			double ret = test.resultUnitTransform(int(2), int(1), a);
			Assert::AreEqual(exp, ret);
		}

		TEST_METHOD(resultUnitTransform4)
		{
			double a = rand();
			double exp = a;
			double ret = test.resultUnitTransform(int(2), int(2), a);
			Assert::AreEqual(exp, ret);
		}
	};
}