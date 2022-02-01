#include <iostream>
#include <string.h>
using namespace std;

class Student1
{
private:
    char name[40];
    int mks[4], total;

public:
    void accept();
    void display();

    Student1()
    {
        strcpy(name, "\0");
        for (int i = 0; i < 4; i++)
            mks[i] = 0;
        total=0;
    }
};

void Student1::accept()
{
    char nm[2];
    cout << "\nEnter your name: ";
    // gets(name);
    cin.getline(name, 40);
    cout << "\nEnter the marks of 4 subjects: \n";
    for (int i = 0; i < 4; i++)
    {
        cin >> mks[i];
        total += mks[i];
    }
    cin.getline(nm, 2);
}

void Student1::display()
{
    cout << "\n Name : " << name;
    cout << "\n Marks Obtained :  ";
    for (int i = 0; i < 4; i++)
        cout << mks[i] << ",";
    cout << "\n Total marks = "<< total;
}
int main()
{
    Student1 s[3];
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        s[i].accept();
        printf("-----------------------------------------------------");
    }

    for (i = 0; i < 3; i++)
    {
        s[i].display();
        printf("\n");
    }
    return 0;
}