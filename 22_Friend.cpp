#include <iostream>
using namespace std;
/*https://www.geeksforgeeks.org/friend-class-function-cpp/
A friend class can access private and protected members of other class in which it is declared as 
friend. It is sometimes useful to allow a particular class to access private members of other class. 
Like friend class, a friend function can be given a special grant to access private and protected 
members. A friend function can be: 
    a) A member of another class 
    b) A global function 

1) Friends should be used only for limited purpose. too many functions or external classes are declared 
as friends of a class with protected or private data, it lessens the value of encapsulation of separate
classes in object-oriented programming.
2) Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
3) Friendship is not inherited 

1)A friend function is not in the scope of the class to which it has been declared as a friend.
2)Since it is not in the scope of the class, it cannot be called by using object of the class (. method).
3)It is called like a normal c++ function. 
4)It can be declared either in public or private part of the class without affecting its meaning. 
5)Usually it has the objects as arguements.
6)To access a member function in the friend function, we use the dot separator. It cannot access them
directly.
*/
class Flower{
    public:
        Flower(){fragrance = 0;}
    private:
        int fragrance;

    friend void FlowersFriend(Flower &FlowerObject);
};

void FlowersFriend(Flower &FlowerObject)
{
    FlowerObject.fragrance = 99;
    cout << FlowerObject.fragrance << "\n";
}
int main()
{
    Flower rose;
    FlowersFriend(rose);
}