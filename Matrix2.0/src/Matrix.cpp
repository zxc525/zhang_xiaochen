#include<iomanip>

#include "Matrix.h"

using namespace std;

Matrix::Matrix(int a,int b)
{
    rol = a;
    col = b;
}
Matrix::sethang(int a)
{
    rol=a;
}

Matrix::gethang()
{
    return rol;
}

Matrix::setlie(int b)
{
    col=b;
}

Matrix::getlie()
{
    return col;
}

ostream &operator<<(ostream &output,const Matrix &number)
{
    for(int a=0;a<number.rol;a++)
    {
        for(int b=0;b<number.col;b++)
        {
            output<<number.numbers<<" ";

        }

        output<<endl;
    }

    return output;
}

istream &operator>>(istream &input,Matrix &number)
{

     input>>number.numbers;

     return input;
}

Matrix &operator+(const Matrix &matrix1,const Matrix &matrix2)
{
    if(matrix1.row==matrix2.row&&matrix1.col==matrix2.col)
    {

    }
}

Matrix &operator-(const Matrix &matrix1,const Matrix &matrix2)
{

}

Matrix &operator*(const Matrix &matrix1,const Matrix &matrix2)
{

}

Matrix &operator*(double,const Matrix &matrix2)
{

}

Matrix &operator*(const Matrix &matrix1,double)
{

}

Matrix &operator/(const Matrix &matrix1,double)
{

}

//Matrix &operator+(Matrix &Matrix1,Matrix &Matrix2)
//{
  //  if()
//}
