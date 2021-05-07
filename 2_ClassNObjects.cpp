#include <iostream> 
#include <string>
using namespace std;
/* Classes are made in order to group similar data, functions and variables ("class members")
together. https://www.geeksforgeeks.org/c-classes-and-objects/
Data and functions can be hidden from user if neccesary.
1. Class declaration 2. Class function specification
Rules: Create it outside main function.
       People typically name their class with uppercase letters.
       Terminate with semicolon.

* Before declaring a function, decide the class's access using an access specifier or visibility labels.
Public: allows the members to be accessed outside a class
Private: allows the members to be accessed only inside a class. It hides data from external use.
Private is a key feature of OOP.
BY DEFAULT: Members of a class are private.

Members of a class need to be declared within the class itself. However they can be defined inside 
(inline function) or outside the class.

A class can be used to make complex data types.
It is a user-defined data type, which holds its own data members and member functions,
which can be accessed and used by creating an instance of that class.
A C++ class is like a blueprint for an object.

*/

class ShrishtisClass
{
    public:
        void CoolSayings1()
        {   cout<< "Find the one thing you were denied so long ago - compassion.\n";
            cout<< "One often meets his destiny on the road he takes to avoid it.\n";
        }
        void CoolSayings2()
        {   cout<< "You must let go of the illusion of control.\n";
            cout<< "When will you realize, the more you take, the less you have.\n";
        }
        int number;
        bool isRound(){
            if(number%10==0 || number%5==0){
                return true;
            }
            return false;
        }

}; /*DONOT FORGET ABOUT THIS SEMI-COLON*/ 

// Making a datatype with classes, like a structure

class Car
{
    public:
    string name;
    string color;
    string company;
    int make;
    int registration_no;
};

int main()
{    /*An object helps to access stuff inside a class.*/
    ShrishtisClass ShrishtisObject;
    ShrishtisObject.CoolSayings1();
    ShrishtisObject.CoolSayings2();

    ShrishtisClass MyObject;
    MyObject.number = 47;
    cout<<MyObject.isRound()<<endl;

/* A class is a blueprint or a template that can be used again and again using objects.
An object is an actual instance of that blueprint or here the class. */

    Car car1;
    car1.name = "Corolla";
    car1.color = "Silver";
    car1.company = "Toyota";
    car1.make = 2006;
    car1.registration_no = 8089;

    Car car2;
    car2.name = "Baleno";
    car2.color = "Blue";
    car2.company = "Maruti Suzuki";
    car2.make = 2017;
    car2.registration_no = 5820;

    cout<<car1.name<<endl;
    cout<<car2.color<<endl;

    return 0;    
}