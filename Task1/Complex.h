#ifndef COMPLEX_h
#define COMPLEX_h
#include <iostream>;
using namespace std;

class ComplexNumber {

public:
    ComplexNumber();
    ComplexNumber(double a, double b);

    ComplexNumber plus(ComplexNumber&);
    ComplexNumber minus(ComplexNumber&);
    ComplexNumber multiply(ComplexNumber&);
    ComplexNumber divide(ComplexNumber&);

    void print();
    void setA(double a);
    void setB(double b);
    void read();
    double abs();

private:
    double a, b;

};
#endif
