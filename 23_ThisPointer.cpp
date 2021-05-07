#include <iostream>
#include <string>
using namespace std;
/* https://www.geeksforgeeks.org/this-pointer-in-c/ 

    A special kind of pointer, and that pointer stores the address of the 
    current object.

*/
class Brooklyn
{
    public:
    Brooklyn(int a, int b) : regVar(a) // Member Intializer list
    {
        cout << "Creating a new character \n";
    }

    void print()
    {
        cout << "Character age is " << regVar <<" years \n";
        cout << "Character age is " << this->regVar <<" years \n";
        cout << "Character age is " << (*this).regVar <<" years \n";
    }

    private:
    int regVar;
   

};

int main()
{
    Brooklyn Boyle(46, 66);
    Boyle.print();
}