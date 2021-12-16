/**
 * @file ComplexNum.cpp
 * @author Rohit,Rohit (you@domain.com)
 * @brief Complex Numbers
 * @version 0.1
 * @date 2021-12-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void print()
    {
        cout << real << " + " << imag << "i\n";
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4), c3 = c1 + c2;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}