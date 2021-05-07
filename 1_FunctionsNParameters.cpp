#include <iostream> /*preprrocessor directive include and load a file in this program that is used later on
                      We are loading iostream file here to use more functionalities
                      This file includes the code for input and output operations that we need to print to 
                      the screen*/
using namespace std;/*A namespace is designed to overcome the difficulty of variables and classes with same names
                      and is used as additional information to differentiate similar functions, classes, variables etc.
                      with the same name available in different libraries. Using namespace, you can define the context 
                      in which names are defined. In essence, a namespace defines a scope.*/
/* the function is declared by first declaring its return type. The function is then named. The brackes are called parameters*/                     

void italian(int pasta = 1, int lasagna = 1); /* Computers compile in a top to bottom fashion. If you put call your functions at the top and actually put them in code at the bottom,
the compiler will throw an error. So we 'prototype' the function, inorder to inform the compiler that such a fucntion exists and is defined later on. */ 
// The above function also has default arguements. If the user doesn't enter any values explicitly, then its going to use those default values of 1 and 1.

int main()
{
    int x,y;
    cin>>x>>y;
    italian(x,y);
    italian(5); // If the user enters 1 value in paramters when the function has more than 1 arguments (with default values), the computer will automatically assume that the input is for the first parameter. Rest use default arguments.
    // So keep in mind the computer matches the input arguments during function call with the variables of the function parameter in corresponding order. 
    italian();
    return 0;
}
void italian(int pasta, int lasagna) /*void return type functions donot a return anything, also here default arguements have been assigned*/
{
    cout<<"I had "<<pasta<<" bowls of pasta today \n";
    cout<<"I had "<<lasagna<<" bowls of lasagna today \n";
    int answer = pasta + lasagna;
    cout<<"In total I had "<<answer<<" bowls. Yum!\n";
}