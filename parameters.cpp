#include <iostream> /*preprrocessor directive include and load a file in this program that is used later on
                      We are loading iostream file here to use more functionalities
                      This file includes the code for input and output operations that we need to print to 
                      the screen*/
using namespace std;/*A namespace is designed to overcome the difficulty of variables and classes with same names
                      and is used as additional information to differentiate similar functions, classes, variables etc.
                      with the same name available in different libraries. Using namespace, you can define the context 
                      in which names are defined. In essence, a namespace defines a scope.*/
void italian(int pasta = 1, int lasagna = 1) /*void functions donot require a return type, also here default arguements have been assigned*/
{
    cout<<"I had "<<pasta<<" bowls of pasta today \n";
    cout<<"I had "<<lasagna<<" bowls of lasagna today \n";
    int answer = pasta + lasagna;
    cout<<"In total I had "<<answer<<" bowls. Yum!\n";
}
int main()
{
    int x,y;
    cin>>x>>y;
    italian(x,y);
    return 0;
}