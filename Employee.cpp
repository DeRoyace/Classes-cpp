#include <iostream>
#include<string.h>
using namespace std;
int obj;
class Employee
{
public:
    int id, n;
    char name[100];
    float salary;

public:
    void accept();
    int findEmploy(char*);
    void display();
    Employee()
    {
        cout << "Constructor " << ++obj << " Invoked" << endl;
    }
    ~Employee()
    {
        cout << "Destructor " << obj-- << " Invoked" << endl;
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
        cout << "---------------------------------------------";
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
    cout << "\n\n>>>>>>>>>>>>>>>> LIST OF ALL EMPLOYEES WITH DETAILS <<<<<<<<<<<<<<<< \n";
    for (int i = 0; i < n; i++)
    {
        e[i].display();
        cout << "\n********************************************************************";
    }

    int flag=0;
    char nam[100];
    cout << "\nEnter employee name you want to search : ";
    cin >> nam;

    int i=0,j=0;
    for (i = 0; i < n; i++)
    {
        j=e[i].findEmploy(nam);
        if(j == 1)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        cout << "Employee name found!\n";
        e[i].display();
    }
    else
    {
        cout << "\nEmployee name Not found." << endl;
    }
    cout << "\n********************************************************************";
    //code to find highest salary :
    float max=e[0].salary;
    for (int i = 1; i < n; i++)
    {
        if(max < e[i].salary)
        {
            max = e[i].salary;
        }
    }
    cout << "\nHighest salary is : Rs. " << max << "\n\n";
    return 0;
}