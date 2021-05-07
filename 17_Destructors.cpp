#include <iostream>
#include <string>
using namespace std;

/*
Destructor is a member function which is called automatically during destruction or deletion of an object.

Syntax: ~constructor-name();

Properties:
1> Destructor function is automatically invoked when the objects are destroyed.
2> It cannot be declared static or const.
3> The destructor does not have arguments.
4> It has no return type - not even void.
5> It cannot be overloaded.
6> An object of a class with a Destructor cannot become a member of the union.
7> A destructor should be declared in the public section of the class.
8> The programmer cannot access the address of destructor.

When is destructor called? 
A destructor function is called automatically when the object goes out of scope: 
(1) the function ends 
(2) the program ends 
(3) a block containing local variables ends 
(4) a delete operator is called  

*/

class Chef
{
    public:
    string cuisine;
    int rating;

    Chef(string x, int y) // Constructor
    {
        cuisine = x;
        rating = y;
    }

    void makeSalad()
    {
        if(rating > 0){
            cout << "The " << cuisine << " chef made salad" << endl;}
        else{
            cout << "The " << cuisine << " chef couldn't make salad" << endl;}
    }

    void makeBread()
    {
        if(rating > 3){
            cout << "The " << cuisine << " chef made bread" << endl;}
        else{
            cout << "The " << cuisine << " chef couldn't make bread" << endl;}
    }

    ~Chef() // Destructor
    {
        cout << "The " << cuisine << " chef has left the restaurant. Bon Appetit." << endl;
    }

};

int main()
{
    Chef NewChef("Italian",1);
    NewChef.makeSalad();
    NewChef.makeBread();
}