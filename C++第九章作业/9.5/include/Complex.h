#ifndef _COMPLEX_H_
#define _COMPLEX_H_
class Complex
{
public:
   Complex( double = 0.0, double = 0.0 );
   Complex add( const Complex & );
   Complex subtract( const Complex & );
   void printComplex();
   void setComplexNumber( double, double );
private:
   double realPart;
   double imaginaryPart;
};
#endif

