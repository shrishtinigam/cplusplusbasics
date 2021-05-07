#include<iostream>
using namespace std;

class Printing
{
    public:
    void print1()
    {
        cout << "Harry is short for Harriet" << "\n";
    }
    void print2()
    {
        cout << "Do you know you do that out loud?" << "\n";
    }

};

int main()
{
    Printing printObject;
    Printing * printPointer = &printObject;

    printObject.print1();
    printPointer->print1();
}