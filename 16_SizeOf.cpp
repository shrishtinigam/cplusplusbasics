#include <iostream>
using namespace std;

/* sizeof operator
    sizeof is a unary operator that takes a datatype or expression as input and gives us the
    storage size as output. (in bytes)

    It can be implemented in a few ways:
    1> return the amount of memory is allocated to data types like int, float, char… etc
    2> return the  size of the expression or variable like x, y, or x+y

    It can be used in the following ways:
    1> find number of elements in an array
    2> allocate a block of memory dynamically *

*/



int main()
{ 

    int a;
    char b;
    double c;
    int d[10];
    double e[20];
     
    cout <<  sizeof(a) << endl;
    cout <<  sizeof(b) << endl;
    cout <<  sizeof(c) << endl;
    cout <<  sizeof(d) << endl;
    cout <<  sizeof(e) << endl;

    /*
    OUTPUT
    4
    1
    8
    40
    160
    */

   cout << sizeof(d) / sizeof(d[0]) << endl; // gives length of array

   /*
    OUTPUT
    10
   */

}