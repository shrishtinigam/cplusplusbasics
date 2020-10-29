#include <iostream> 
using namespace std;
/* Classes are made in order to group similar data, functions and variables ("class members")
together.
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
)
*/
class ShrishtisClass
{
    public:
        void CoolSayings1()
        {   cout<< "Find the one thing you were denied so long ago, compassion.\n";
            cout<< "One often meets his destiny on the road he takes to avoid it.\n";
        }
    public:
        void CoolSayings2()
        {   cout<< "You must let go of the illusion of control.\n";
            cout<< "When will you realize, the more you take, the less you have.\n";
        }

}; /*DONOT FORGET ABOUT THIS SEMI-COLON*/ 
int main()
{    /*An object helps to access stuff inside a class.*/
    ShrishtisClass ShrishtisObject;
    ShrishtisObject.CoolSayings1();
    ShrishtisObject.CoolSayings2();
    return 0;    
}