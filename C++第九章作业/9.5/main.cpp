#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
   Complex a(3, 5), b(2, 6), c;
   a.printComplex();
   cout<< " + "<<endl;

   b.printComplex();
   cout<< " = "<<endl;

   c=a.add(b);
   c.printComplex();
   cout<<'\n'<endl;

   a.setComplexNumber( 7, 1 );
   b.setComplexNumber( 6, 5 );
   a.printComplex();
   cout<<" - "<<endl;

   b.printComplex();
   cout<<" = "<<endl;

   c=a.subtract( b );
   c.printComplex();
   cout<<endl;
   return 0;
}
