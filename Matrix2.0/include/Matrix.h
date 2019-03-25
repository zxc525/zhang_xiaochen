#ifndef MATRIX_H
#define MATRIX_H

#include<iostream>
using namespace std;

class Matrix
{
    friend istream &operator>>(istream &,Matrix &);
    friend ostream &operator<<(ostream &,const Matrix &);

    friend Matrix operator+(const Matrix &,const Matrix &);
    friend Matrix operator-(const Matrix &,const Matrix &);
    friend Matrix operator*(const Matrix &,const Matrix &);

    friend Matrix operator*(double,const Matrix &);
    friend Matrix operator*(const Matrix &,double);
    friend Matrix operator/(const Matrix &,double);

    public:
        Matrix(unsigned int r=0,unsigned int c=0);
        Matrix(unsigned int r=0;unsigned int c,double val);
        Matrix(unsigned int n);
        Matrix(const Matrix &rhs);

        ~Matrix();

        Matrix &operator=(const Matrix &);

        double const* operator[](const unsigned int i)const;
        {
            return mat+i*col;
        }

        double * operator[](const unsigned int i)
        {
            return mat+i*col;
        }

        unsigned int getRows()const
        {
            return row;
        }

        unsigned int getCols()const
        {
            return rol;
        }

    private:
        unsigned int row,col;
        double *mat;
};

#endif // MATRIX_H
