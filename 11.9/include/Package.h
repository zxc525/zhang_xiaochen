#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>

using namespace std;



class Package
{
    public:
        Package(const string &,const string &,const string &,const string &, const string & ,double,double );

        void setName(const string &);
        string getName();

        void setAddress(const string &);
        string getAddress();

        void setCity(const string &);
        string getCity();

        void setSate(const string &);
        string getSate();

        void setPostalCode(const string &);
        string  getPostalCode();

        void setWeight(double);
        double getWeight();

        void setCostPerOunce(double);
        double getCostPerOunce();

        double calculateCost();


    private:
        string name;
        string add;
        string city;
        string sate;
        string  postCode;
        double weight;
        double costPerOunce;
};

#endif // PACKAGE_H
