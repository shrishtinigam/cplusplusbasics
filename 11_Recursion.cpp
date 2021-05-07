 // Recursive Function
/* A function which is called within the body of the same function itself 
   is called a recursive function*/

/*
Just like the Principal of Mathematical Induction,
1> Recursion Hypothesis/Assumption - Assume that for some condition, a logical assumption can be derived from the smallest sub-problem 
2> Self Work - Proving that the logical assumption is true by proving that the second smallest possible sub-problem can be solved using it.
3> Base Case - Smallest sub-problem for which we already know the answer

*/

#include <iostream>
using namespace std;

int factorialFinder(int x){
    if(x==1){       // base case so that the program ends, it is an ending point,
        return 1;  // (when it gets to this case,all the rest of the questions can be solved)
    }else{
        return x * factorialFinder(x-1);
    }

}

int sumFinder(int y){ // finds sum of all natural numbers till y
    if(y==0){
        return 0;
    }else{
        return y+sumFinder(y-1);
    }

}

int main()
{
    int a;
    cout<< "enter 1 integer" <<endl;
    cin>>a;
    cout << "Factorial: "<< factorialFinder(a)<<endl;
    cout << "Sum of first "<<a<< " natural numbers: "<< sumFinder(a)<<endl;

}