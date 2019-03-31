#include<iostream>
#include<cmath>
#include<iomanip>
#include "Polynomial.h"

using namespace std;


Polynomial::Polynomial(const Polynomial & rhs)
{
	_Copy(rhs);
}

Polynomial & Polynomial::operator = (const Polynomial & rhs)
{
	if(this == &rhs) return *this;

	this->~Polynomial();
	_Copy(rhs);

	return *this;
}

Polynomial::~Polynomial()
{
	PolyClear();
}

void Polynomial::PolyClear()
{
	Term *pH = poly.next, *pT = NULL;
	while(pH) {
		pT = pH;
		pH = pH->next;
		delete pT;
	}
	poly.next = NULL;
}

int Polynomial::PolyLength() const
{
	Term * pT = poly.next;
	int cnt = 0;
	while(pT) {
		++cnt;
		pT = pT->next;
	}
	return cnt;
}

bool Polynomial::PolyEmpty() const
{
	return poly.next == NULL;
}

bool Polynomial::AddTerm(double coef, int exp)
{
	Term *pnew = new Term(coef, exp);
	if(!pnew) return false;

	Term *prior = &poly, *pcur = poly.next;
	while(pcur && exp < pcur->exp) {
		prior = pcur;
		pcur = pcur->next;
	}

	if(!pcur || exp > pcur->exp) {
	    pnew->next = prior->next;
	    prior->next = pnew;
	}else {
		pcur->coef += coef;
		delete pnew;
	}

	return true;
}

void Polynomial::Simplify()
{

	Term * prior = poly.next;
	while(prior && prior->next) {
		Term * pT = prior->next;
		if(prior->exp == pT->exp) {
			prior->next = pT->next;
			prior->coef += pT->coef;
			delete pT;
		}else {
			prior = pT;
		}
	}

	prior = &poly;
	while(prior->next) {
		Term * pT = prior->next;
		if(fabs(pT->coef - 0) < 1e-6 ) {
			prior->next = pT->next;
			delete pT;
		}else
			prior = pT;
	}
}

Polynomial & Polynomial::AddPoly(const Polynomial & rhs)
{
	for(Term * pT = rhs.poly.next; pT; pT = pT->next) {
		AddTerm(pT->coef, pT->exp);
	}
	Simplify();
	return *this;
}

Polynomial & Polynomial::SubPoly(const Polynomial & rhs)
{
	for(Term *pT = rhs.poly.next; pT; pT = pT->next) {
		AddTerm(-pT->coef, pT->exp);
	}
	Simplify();
	return *this;
}

Polynomial & Polynomial::MultPoly(const Polynomial & rhs)
{
	Polynomial prod;
	for(Term* pT1 = poly.next; pT1; pT1 = pT1->next) {
		for(Term* pT2 = rhs.poly.next; pT2; pT2 = pT2->next) {
			prod.AddTerm(pT1->coef * pT2->coef, pT1->exp + pT2->exp);
		}
	}
	Swap(prod);
	Simplify();
	return *this;
}

Polynomial & Polynomial::DivPoly(const Polynomial & rhs, Polynomial & rem)
{
	rem.PolyClear();
	Swap(rem);

	Term *remHead = rem.poly.next, *divHead = rhs.poly.next;
	while(remHead && remHead->exp >= divHead->exp) {
		Term quot(remHead->coef/divHead->coef,
				remHead->exp-divHead->exp);
		AddTerm(quot.coef, quot.exp);

		for(Term * pT = divHead; pT; pT = pT->next) {
			rem.AddTerm(-quot.coef*pT->coef, quot.exp+pT->exp);
		}
		rem.Simplify();
		remHead = rem.poly.next;
	}

	return *this;
}

Polynomial & Polynomial::DivPoly(const Polynomial & rhs)
{
	Polynomial rem;
	return DivPoly(rhs,rem);
}

void Polynomial::display() const
{
	Term * pT = poly.next;
	if(pT == NULL) {
		cout << "0" << endl;
		return;
	}

	bool first = true;
	while(pT) {

		if(pT->coef >= 0) {
			if(!first) {
			    cout << "+";
			}
		}
		else
			cout << "-";


		if(fabs(fabs(pT->coef) - 1) > 1e-3)
			cout << fabs(pT->coef);


		if(pT->exp != 0) {
			cout << "x";

			if(pT->exp != 1)
				cout << "^";
			if(pT->exp > 0)
				cout << pT->exp;
			else
				cout << "(" << pT->exp << ")";
		}

		pT = pT->next;
		first = false;
	}
}

void Polynomial::Swap(Polynomial & rhs)
{
	Term * pT = rhs.poly.next;
	rhs.poly.next = poly.next;
	poly.next = pT;
}

void Polynomial::_Copy(const Polynomial & rhs)
{
    Term* pT = rhs.poly.next;
    while(pT) {
    	AddTerm(pT->coef, pT->exp);
    	pT = pT->next;
    }
}

