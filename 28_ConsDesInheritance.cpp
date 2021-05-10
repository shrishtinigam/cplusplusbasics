#include <iostream>
#include <string>
using namespace std;

class Mother
{
    public:
    Mother()
    {
        cout << "I am the mother constructor!" << "\n";
    }
    ~Mother()
    {
        cout << "I am the mother destructor!" << "\n";
    }
};

class Daughter : public Mother
{
    public:
    Daughter()
    {
        cout << "I am the daughter constructor!" << "\n";
    }
    ~Daughter()
    {
        cout << "I am the daughter destructor!" << "\n";
    }
};

int main()
{
    Mother m1;
    Daughter dina;
}

/*
    I am the mother constructor!
    I am the mother constructor!
    I am the daughter constructor!
    I am the daughter destructor!
    I am the mother destructor!
    I am the mother destructor!
*/