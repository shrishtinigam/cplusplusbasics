#include <iostream>
using namespace std;

/*  PASS BY VALUE
    When passing by value, you are passing in a copy of the value stored 
    in the variable into that function. So the original cannot be changed 
    until we set it to another value. The function has access to only a copy
    of that variable not the original variable itself.
    {{NOTE: The variable itself cannot be changed here.}} 

    PASS BY REFERENCE
    When passing by address, you are passing in the variables address, and when 
    you do this, you give the function direct access to that variable so the original
    variable can indeed be modified inside the function.
    {{NOTE: The variable itself is changed here}}

    Reason to PBR:
    PBR puts less stress on your computer, instead of passing by value where everytime
    you call that function it has to make a copy of that variable, suppose you had a 100 
    variables that would be very stressful on you computer. If you PBR, you pass in the
    the variable itself, and it doesn't have to make copies of every variable.
*/

float sqr(int x)
{
    float sqr;
    sqr = x*x;
    return sqr;
}
int passByValue(int x) 
{
    x = 500;
    return x;
}
int passByReference(int *x)
{
    *x = 250;
    return *x;
}

int main()
{
    int fox = 50;
 
    // You can pass arguements into functions by either pass by value or pass by reference
    cout << sqr(8) << endl; // Pass by value
    cout << sqr(fox) << endl; // Pass by value


    int red = 5; 
    int blue = 5;

    cout << "This is red before " << red << endl;
    cout << "This is blue before " << blue << endl;

    passByValue(red); // Pass by Value
    passByReference(&blue); // Pass by Reference

    cout << "This is red after " << red << endl;
    cout << "This is blue after  " << blue << endl;

    return 0;

}