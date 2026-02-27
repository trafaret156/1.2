#pragma once
class Fraction {
private:
	int num;
	int den;
	int gcd(int a, int b);
public:
	bool GetNum() const { return num; }
	bool GetDen() const { return den; }
	bool SetNum(int value);
	bool SetDen(int value);
	bool Init(int num, int den);
	void Read();
	void Display() const;
	void Simplify();
	double Value() const;
};