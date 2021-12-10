#include <iostream>
using namespace std;
static int obj;

class Area
{

public:
    int l, b;
    Area()
    {
        l = b = 0;
    }

    Area(int x, int y)
    {
        l = x;
        b = y;
    }
    void accept();
    void display();
};

void Area ::accept()
{
    cout << "Enter length = ";
    cin >> l;
    cout << "Enter breadth = ";
    cin >> b;
}

void Area ::display()
{
    cout << "\nLength = "<< l;
    cout << "\nBreath = "<< b;
    cout << "\nArea of rectangle = " << l * b << endl;
}

class Volume : public Area
{
    int h, vol;

public:
    Volume()
    {
        h = vol = 0;
    }

    Volume(int x)
    {
        h = x;
    }
    void get_height();
    void display();
};

void Volume ::get_height()
{
    cout << "Enter height : ";
    cin >> h;
}

void Volume ::display()
{
    accept();
    cout << "\nLength = "<< l;
    cout << "\nBreath = "<< b;
    cout << "\nHeight = "<< h;
    cout << "\nVolume of cuboid = " << l * b * h << endl;
}

int main()
{
    Area a1(5, 6);
    a1.display();
    cout << "-------------------------------------------------\n";

    Area a2;
    a2.accept();
    a2.display();
    cout << "-------------------------------------------------\n";

    Volume v1;
    v1.get_height();
    v1.display();
    cout << "-------------------------------------------------\n";

    Volume v2(6);
    v2.display();
    cout << "-------------------------------------------------\n";
    return 0;
}