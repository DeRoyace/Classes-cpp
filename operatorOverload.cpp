/**
 * @file operatorOverload.cpp
 * @author Rohit,Rohit (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-12-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:
    Count() : value(5)
    {
        // constructor to initialize count = 5;
    }

    void operator++() // overload ++ when used as prefix;
    {
        ++value;
    }
    void operator++(int) // overload ++ when used as postfix;
    {
        value++;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count cnt;

    cnt++; // calling operator++(int) --postfix
    cnt.display();

    ++cnt; // calling operator++() prefix
    cnt.display();

    return 0;
}