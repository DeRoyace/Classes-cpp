#include<iostream>
using namespace std;

class Perimeter
{
    float p;

public:
    Perimeter()
    {
        p = 0.0;
    }

    void calc(float, float);
    void display();
};

void Perimeter ::calc(float a, float b)
{
    p = 2 * (a + b);
}

void Perimeter ::display()
{
    cout << " = " << p << endl;
}

class Square : public Perimeter
{
    float a;

public:
    Square(float x)
    {
        a = x;
    }
    void show();
};

void Square ::show()
{
    calc(a, a);
    cout << "\nPerimeter of Square is ";
    display();
}

int main()
{
    float a;
    Square sq(5);
    sq.show();
    cout << "-------------------------------------------------";

    cout << "\nEnter side of a square : ";
    cin >> a;
    Square sq2(a);
    sq2.show();
    cout <<  "-------------------------------------------------";

    float l, b;
    cout << "\nEnter length and breadth of rectangle : \n";
    cin >> l >> b;
    Perimeter p;
    cout << "Perimeter of rectangle is ";
    p.calc(l, b);
    p.display();
    cout <<  "-------------------------------------------------\n";
    return 0;
}