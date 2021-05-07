#include <iostream>
using namespace std;

class Sally
{
    public:
    int num;
    Sally(int a)
    {
        num = a;
    }
    Sally(){};

    Sally operator+(Sally salObj){
        Sally brandNew;
        brandNew.num = num + salObj.num;
        return(brandNew);
    }
};

int main()
{
    Sally a(34);
    Sally b(21);
    Sally c;

    c = a + b;
    cout << c.num << "\n";
}