#include<iostream>
#include<stdexcept>
#include "Package.h"

using namespace std;

Package::Package(const string &a,const string &b,const string &c,const string &d, const string &e,double f,double g)
{
    name=a;
    add=b;
    city=c;
    sate=d;
    postCode=e;
    setWeight(f);
    setCostPerOunce(g);
}

void Package::setName(const string &a)
{
    name=a;
}

string Package::getName()
{
    return name;
}

void Package::setAddress(const string &b)
{
    add=b;
}

string Package::getAddress()
{
    return add;
}

void Package::setCity(const string &c)
{
    city=c;
}

string Package::getCity()
{
    return city;
}

void Package::setSate(const string &d)
{
    sate=d;
}

string Package::getSate()
{
    return sate;
}

void Package::setPostalCode(const string &e)
{
    postCode=e;
}

string Package::getPostalCode()
{
    return postCode;
}

void Package::setWeight(double f)
{
    if(f>=0)
        weight=f;
    else
        throw invalid_argument("Weight must be >=0.0");
}

double Package::getWeight()
{
    return weight;
}

void Package::setCostPerOunce(double g)
{
    if(g>0)
        costPerOunce=g;
    else
        throw invalid_argument("CostPerOunce must be >0.0");
}

double Package::getCostPerOunce()
{
    return costPerOunce;
}

double Package::calculateCost()
{
    return weight*costPerOunce;
}
