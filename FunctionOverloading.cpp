// Function Overloading
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void printItOut(float x) 
{
    cout<<"A "<<x;
}
void printItOut(string x)
{
    cout<<" year old person named "<<x;
}
void printItOut(int x)
{
    int y;
    srand(x);
    y = (rand()%100);
    cout<<" has "<< y <<" years to live. ";
}

int main()
{
    float a;
    string b;
    int c; 
    cout<<"Input a floating point number , a name and an integer ";
    cin>>a>>b>>c;
    printItOut(a);
    printItOut(b);
    printItOut(c);
}
// Function Overloading - use of the {same function names} to create functions that perform a variety of different tasks
// A family of functions can be created with one function name but different arguement lists.
// Function would perform different operation depending on the arguement list in function call.
// The correct function is then invoked, as the compiler matches the prototype having the same number and type of arguement
// and then calls appropriate function for execution. 
// A best match should be unique. 
// An example of compile time polymorphism 
