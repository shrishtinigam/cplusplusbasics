#include <iostream>
#include <string>
using namespace std;
// https://www.geeksforgeeks.org/introduction-to-complex-objects-and-composition/
class Birthday
{
    public:
    Birthday(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }
    void printDate()
    {
        cout << "Birthday = " << day << "-" << month << "-" << year << "\n"; 
    }
    private:
    int month;
    int day;
    int year;
};

class People
{
    public:
        People(string x, Birthday bo) : name(x), DoB(bo)
        {
            cout << "A person was created" << "\n";
        }
        void printInfo()
        {
            cout << "Name: " << name << " DoB = ";
            DoB.printDate();
            cout << "\n";
        }
    private:
        string name;
        Birthday DoB;
};

int main()
{
    Birthday birthObj(6, 20, 2002);
    People person1("Shrishti", birthObj);
    person1.printInfo();
}