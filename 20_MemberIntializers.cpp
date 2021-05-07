#include <iostream>
#include <string>
using namespace std;

/*  https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/
    Initializer List is used in initializing the data members of a class. The list of members 
    to be initialized is indicated with constructor as a comma-separated list followed by a colon. 
    there are situations where initialization of data members inside constructor doesn’t work and 
    Initializer List must be used

    1) For initialization of non-static const data members
        const data members must be initialized using Initializer List.

    Read gfg page for the rest
*/

class Brooklyn
{
    public:
    Brooklyn(int a, int b) : regVar(a), constVar(b) // Member Intializer list
    {
        cout << "Creating a new character \n";
    }

    void print()
    {
        cout << "Character height is " << constVar << " inches and age is " << regVar <<" years \n";
    }

    private:
    int regVar;
    const int constVar;

};

int main()
{
    Brooklyn Boyle(46, 66);
    Boyle.print();
}