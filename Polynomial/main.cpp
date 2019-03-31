#include<iostream>
#include"Polynomial.h"

using namespace std;

int main(void)
{
	Polynomial poly1, poly2;
	poly1.AddTerm(5, 2);
	poly1.AddTerm(3, 1);
	poly1.AddTerm(7, 0);
	poly1.display();
	cout << endl;

	poly2.AddTerm(4, 2);
	poly2.AddTerm(2, 0);
	poly2.display();
	cout << endl;

	poly1.AddPoly(poly2);
	poly1.display();
	cout << endl;

	poly1.SubPoly(poly2);
	poly1.display();
	cout << endl;

	poly1.MultPoly(poly2);
	poly1.display();
	cout << endl;

	Polynomial rem;
	poly1.DivPoly(poly2, rem);
	poly1.display();
	cout << endl;
	rem.display();
	cout << endl;

	return 0;
}

