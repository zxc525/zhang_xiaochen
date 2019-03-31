#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include<iostream>
using namespace std;

#include<iostream>

struct Term{
	double coef;
	int exp;

	Term * next;

	Term():coef(0), exp(0), next(NULL) {}
	Term(double _coef, int _exp = 0):
		coef(_coef), exp(_exp), next(NULL) {}
};


class Polynomial{
	Term poly;

public:
	Polynomial() {}
	Polynomial(const Polynomial & rhs);
	Polynomial & operator + (const Polynomial & rhs);
	Polynomial & operator - (const Polynomial & rhs);
	Polynomial & operator * (const Polynomial & rhs);
	Polynomial & operator = (const Polynomial & rhs);
	Polynomial & operator += (const Polynomial & rhs);
	Polynomial & operator -= (const Polynomial & rhs);
	~Polynomial();

	void PolyClear();
	int  PolyLength() const;
	bool PolyEmpty() const;

	bool AddTerm(double coef, int exp);
	void Simplify();

	Polynomial & AddPoly(const Polynomial & rhs);
	Polynomial & SubPoly(const Polynomial & rhs);
	Polynomial & MultPoly(const Polynomial & rhs);
	Polynomial & DivPoly(const Polynomial & rhs, Polynomial & rem);
	Polynomial & DivPoly(const Polynomial & rhs);

	void display() const;

	void Swap(Polynomial & rhs);

private:
	void _Copy(const Polynomial & rhs);
};




#endif // POLYNOMIAL_H
