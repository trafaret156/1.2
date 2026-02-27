#include "Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;

bool Fraction::SetNum(int value) {
    num = value;
    return true;
}
bool Fraction::SetDen(int value) {
    if (value != 0) {
        den = value;
        return true;
    } else {
        den = 1;
        return false;
    }
}
bool Fraction::Init(int num, int den) {
    return SetNum(num) && SetDen(den);
}
void Fraction::Read() {
    int num, den;
    do {
        cout << "Enter num: ";
        cin >> num;
        cout << "Enter den: ";
        cin >> den;
    } while (!Init(num, den));
    
    Simplify();
}
void Fraction::Display() const { 
    cout << num << "/" << den << endl; 
}
void Fraction::Simplify() {
    int common = gcd(num, den);
    num /= common;
    den /= common;
    if (den < 0) {
        num = -num;
        den = -den;
    }
}
int Fraction::gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0) return a;
    return gcd(b, a % b);
}
double Fraction::Value() const {
    return static_cast<double>(num) / den;
}

