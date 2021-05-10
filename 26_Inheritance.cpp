#include <iostream>
#include <string>
using namespace std;

/*
Inheritance is the idea that you can inherit things from another class. For example say
you have a class that has a couple functions in it and a couple variables in it and you
wanted to make a new class that also had the same functions and variables in it well instead
of copying and pasting them all into your new class you can just 'inherit' from the other 
class and whenever you inherit from another class you get all the stuff you get all the 
functions and variables. This is the basic explanation, there are a lot of rules and properties
of inheritance which aren't mentioned here.

Read:
https://www.geeksforgeeks.org/inheritance-in-c/
https://www.geeksforgeeks.org/c-inheritance-question-1/
*/

class Mother // base class
{
    public:
    
    void saySomething()
    {
        cout << "Hello everyone\n"; 
    }
};
class Daughter : public Mother // derived class
{
    public:
    int age;
};

int main()
{
    Mother mo;
    mo.saySomething();
    Daughter dobj;
    dobj.saySomething();
}