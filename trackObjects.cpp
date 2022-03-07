/**
 * @file trackObjects.cpp
 * @author Rohit,Rohit (deroyace93@yahoo.com)
 * @brief Program to keep a track of no. of objects created, destroyed and active in the program.
 * @version 0.1
 * @date 2021-12-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;
int obj, des, actv;
class trackObjects
{
public:
    trackObjects()
    {
        obj++;
        cout << "\n-------------------------------------------";
        cout << "\nObject " << ++actv << " created." << endl;
    }
    ~trackObjects()
    {
        des++;
        cout << "\nObject " << actv-- << " destroyed." << endl;
        show();
    }
    void show()
    {
        int count = obj;
        cout << "\nNo. of Objects Created = " << obj;
        cout << "\nNo. of Objects Active = " << actv;
        cout << "\nNo. of Objects Destroyed = " << des << endl;
    }
};

int main()
{
    {
        trackObjects t1;
        t1.show();
        {
            trackObjects t2;
            t2.show();
        }
    }
    trackObjects t3;
    t3.show();

    return 0;
} // end of main()