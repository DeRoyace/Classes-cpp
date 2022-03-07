//product name, quantity, code, price, instock, outstock;
#include <iostream>
using namespace std;

class product
{
private:
    char name[100];
    long code;
    double price;
    int stocks=0, newstk;
    int nitems;

public:
    void accept();
    void display();
    void instock();
    void outstock();
};

void product::accept()
{
    cout << "\nEnter product name: ";
    cin >> name;
    cout << "Enter product code: ";
    cin >> code;
    cout << "Enter product price: Rs. ";
    cin >> price;
}

void product::display()
{
    cout << "\nProduct Name : " << name;
    cout << "\nCode : " << code;
    cout << "\nPrice : Rs. " << price;
}

void product::instock()
{
    // stocks=0;
    cout << "Enter number of new stocks: ";
    cin >> newstk;
    stocks += newstk;
}

void product::outstock()
{
    char ch;
    display();
    cout << "\nEnter no. of items required for customer : ";
    cin >> nitems;

    if (stocks >= nitems)
    {
        stocks -= nitems;
        cout << "In stock !";
        cout << "\nNo. of products left: " << stocks << endl;
    }
    else
    {
        cout << "\nOut of stock!" << endl;
        cout << "\nNo. of products left: " << stocks << endl;
    }
    cout << "\n---------------------------------------------------------------------\n";
    cout << "\nDo you want to continue for next customer (Press Y -YES or N -NO): ";
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
    {
        instock();
        outstock();
    }
    else
        exit(0);
}

int main()
{
    product p;
    p.accept();
    p.instock();
    p.outstock();
    return 0;
}