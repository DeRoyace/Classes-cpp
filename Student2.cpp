#include <iostream>
using namespace std;
int obj;
class Student2
{
private:
    char name[100];
    double marks[3];
    double total;

public:
    void display();

    Student2()
    {
        cout << "\nConstructor " << ++obj << " called.";
        cout << "\nEnter name of Student: ";
        cin >> name;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks of Subject " << i + 1 << " : ";
            cin >> marks[i];
        }
        total = 0.0;
    }

    Student2(double mrks[3])
    {
        cout << "\nConstructor " << ++obj << "called.";
        cout << "\nEnter name of Student: ";
        cin >> name;
        for (int i = 0; i < 3; i++)
        {
            marks[i] = mrks[i];
        }
    }
    ~Student2()
    {
        cout << "Destructor " << obj-- << " called." << endl;
    }

};

void Student2::display()
{
    cout << "\nStudent Name : " << name;
    for (int i = 0; i < 3; i++)
    {
        total += marks[i];
    }
    cout << "\nTotal marks = " << total << endl;
}

int main()
{
    double mr[] = {80, 90, 100};
    Student2 s1(mr);
    s1.display();
    cout << "\n------------------------------------------";
    Student2 s2;
    s2.display();
    return 0;
}