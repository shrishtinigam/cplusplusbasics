#include <iostream>
#include <string>
using namespace std;

class Mother 
{
    public:
        int publicv;
    protected:
        int protectedv;
    private:
        int privatev;
};
class Daughter : public Mother 
{
    public:
    void doSomething()
    {
        publicv = 1;
        protectedv = 2;;
    }
    void display()
    {
        cout << publicv << "\n";
        cout << protectedv;
    }
};

int main()
{
    Daughter dobj;
    dobj.doSomething();
    dobj.display();

    cout << dobj.publicv; // ans is 1
    // cout << dobj.protectedv;  --> not possible as it is not accessible outside the base and derived class
}