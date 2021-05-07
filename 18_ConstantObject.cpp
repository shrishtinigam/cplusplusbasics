#include <iostream>
#include <string>
using namespace std;
 

 /*
 Constant is something that cannot be changed or modified in anyway. 
 For example, a variable declared as constant remains unchanged throughout your program.
 If you try to change it then it will throw out an error.
 In C language and C++ we use the keyword const to make program elements constant. 
 'const' keyword can be used in many contexts in a C++ program. It can be used with:

    Variables
    Objects
    Class Member functions
    Function arguments and return types
    Pointers
    Class Data members
    
1> Variables
 If you make any variable as constant, using const keyword, you cannot change its value. 
 Also, the constant variables must be initialized while they are declared.
2> Objects
 An object declared as const cannot be modified and hence, can invoke only 
 const member functions as these functions ensure not to modify the object.

 */
class Bookshelf
{
    public:

    Bookshelf() // Constructor
    {
        cout << "I am at the bookshelf" << endl;
    }

    // Regular Function
    void Matilda(){
        cout << "I am reading Matilda" << endl;
    }
    // Constant Function
    void TheBFG() const{
        cout << "I am reading The BFG" << endl;
    }
};
int main()
{
    // Regular Variables
    int x = 7;
    x = 5;
    cout << x << endl;

    // Constant Variables
    const int y = 5;
    //y = 7;  doing this will throw out an error - "expression must be a modifiable lvalue"

    // Regular Objects
    Bookshelf Reader1;
    Reader1.Matilda();
    Reader1.TheBFG(); // Here TheBFG is a constant function and Reader1 is a regular object. But that is okay.
    // Regular objects can call constant function, but constant objects cannot call regular functions

    // Constant Objects
    const Bookshelf Reader2;
    Reader2.TheBFG();
}