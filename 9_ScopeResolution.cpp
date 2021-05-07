#include <iostream>
#include <cstdlib> 
#include <string>
using namespace std;
// UNARY SCOPE RESOLUTION OPERATOR

/* Scope resolution operator is used to access a global variable from a function 
   in which a local variable is defined with the same name as the global variable. */

string User="John Doe"; // Variables can be declared outside functions, 
// If a varible is declared outside all functions,
// then every single function can use that variable.
// These are called global variables.
int age = 20;

int CutenessCalculator();

int main()
{
    cout<<"Username: "<<endl;
    cin>>User;
    CutenessCalculator();
    
}

int CutenessCalculator()
{
    int age, number; // Variables can be declared inside functions
    /* These variables cannot be used outside the function they are declared in
       These are called local variables.
       Over here, it has a choice between a local and global variable with the same
       name 'age'. Whenever it has such a choice, it chooses the local variable (innermost) by default.
       In order to use the global variable (here, 'age'), we use the Unary Scope Reolution 
       Operator or the :: */

    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your favourite number: ";
    cin>>number;
    srand(age + number + ::age);
    cout<<"Cuteness out of 10: "<< 1+(rand()%10) << endl; 
}
