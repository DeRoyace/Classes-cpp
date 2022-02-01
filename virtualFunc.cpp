/*
A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class version of the function. 

Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.

They are mainly used to achieve Runtime polymorphism
Functions are declared with a virtual keyword in base class.
The resolving of function call is done at runtime.

Rules for Virtual Functions are:

1. Virtual functions cannot be static.
2. A virtual function can be a friend function of another class.
3. Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
4. The prototype of virtual functions should be the same in the base as well as derived class.
5. They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived   class to override (or re-define the virtual function), in that case, the base class version of the function is used.
6. A class may have virtual destructor but it cannot have a virtual constructor.

Source Notes: https://www.geeksforgeeks.org/virtual-function-cpp/
*/

#include <iostream>
using namespace std;

class A
{
public:
    virtual void display()
    {
        cout << "Base class is invoked" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "Derived Class is invoked" << endl;
    }
};

int main()
{
    A *a; //pointer of base class
    B b;  //object of derived class
    a = &b;
    a->display(); //Late Binding occurs
    return 0;
}