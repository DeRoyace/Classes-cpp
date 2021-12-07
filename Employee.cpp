#include <iostream>
#include<string.h>
using namespace std;

class Employee
{
public:
    int id, n;
    char name[100];
    float salary;

public:
    void accept();
    void highSal(float);
    int findEmploy(char*);
    void display();
    Employee()
    {
        cout << "Constructor Invoked" << endl;
    }
    ~Employee()
    {
        cout << "Destructor Invoked" << endl;
    }
};

void Employee ::accept()
{
    cout << "\nEnter Employee details : \n";
    
    
        cout << "Name of Emplyee : ";
        cin >> name;
        cout << "ID : ";
        cin >> id;
        cout << "Salary : Rs. ";
        cin >> salary;
        cout << "-------------------------------------";
}

int Employee ::findEmploy(char *nm)
{
    // b=strcmpi(s1,s2); -1 => s2 is before s1, 1 => s1 before s2, 0 => s1 equals s2
        if (strcmp(nm,name) == 0)
        {
            return 1;
        }
        else
            return 0;
}

// void Employee ::highSal(float high)
// {
//     for (int i = 1; i < n; i++)
//     {
//         high = salary;
//         if(high < salary)
//         {
//             high = salary;
//         }
//     }
//     cout << "\nHighest salary is : Rs. " << high << endl;
// }

void Employee ::display()
{
    cout << "\nEmplyee Name : " << name;
    cout << "\nID : " << id;
    cout << "\nSalary : Rs. " << salary << endl;
}

int main(void)
{
    int n;
    cout << "\nEnter number of employees : ";
    cin >> n;
    Employee e[n]; //creating an object of Employee
    for (int i = 0; i < n; i++)
    {
        e[i].accept();
        
    }
    for (int i = 0; i < n; i++)
    {
        e[i].display();
    }

    int flag=0;
    char nam[100];
    cout << "\nEnter employee name you want to search : ";
    cin >> nam;

    int i=0,j=0;
    for (i = 0; i < n; i++)
    {
        j=e[i].findEmploy(nam);
        cout << j << endl;
        if(j == 1)
        {
            flag=1;
            break;
        }
    }

    if (flag==1)
    {
        e[i].display();
    }
    else
    {
        cout << "\nEmployee name Not found." << endl;
    }    
    return 0;
}