// In the old version of cpp you had to write "return 0;" but now whenever you end your main
// cpp just assumes you returned zero after the last statement.  

// ASSIGNMENT AND INCREMENT OPERATORS //
#include <iostream>
using namespace std;
 int main()
 {
     int x = 10;
    // ASSIGNMENT OPERATORS

     x+=3;
     x-=3;
     x*=3;
     x/=3;
     x%=3;

     // INCREMENT OPERATORS
    
     x=20;
     cout << x++ << endl; // Output of "two plus signs AFTER the variable" will still be 20, because it will output x as is first, then add 1 to it
     cout << x << endl; // So the next time you print x, you get 21

     x=20;
     cout << ++x << endl; // Output of "two plus signs BEFORE the variable" will be 21, because it will add 1 to x first, then output it
     cout << x << endl; // The next time you print x, you will still get 21
     
     // There is also --x and x--

     // && means and
     // || means or
}