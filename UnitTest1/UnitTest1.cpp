#include "pch.h"
#include "../1.2/Fraction.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FractionTests
{
    TEST_CLASS(ValueTests)
    {
    public:

        TEST_METHOD(TestFractionToDouble)
        {
            Fraction f;
            f.Init(3, 4); 

            double actual = f.Value();
            double expected = 0.75;

            Assert::AreEqual(expected, actual, 0.001);
        }

        TEST_METHOD(TestNegativeValue)
        {
            Fraction f;
            f.Init(-1, 2); 
            Assert::AreEqual(-0.5, f.Value(), 0.001);
        }
    };
}