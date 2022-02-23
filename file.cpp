#include <iostream>
using namespace std;
class CppFile
{
public:
    CppFile()
    {
        cout << "Constructor called..." << endl;
    }
};

int main()
{
    CppFile cp;
    cout << "The class Name is different from filename" << endl;
    return 0;
}
