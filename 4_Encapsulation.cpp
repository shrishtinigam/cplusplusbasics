#include <iostream>
#include <string>

using namespace std;

/*Encapsulation makes sure that "sensitive" data is hidden from users.

To achieve this, you must declare class variables/attributes as private (cannot be accessed 
from outside the class). If you want others to read or modify the value of a private member, 
you can provide public get and set methods

Encapsulation is considered good practice to declare your class attributes as private 
(as often as you can). Encapsulation ensures better control of your data, because you (or others) 
can change one part of the code without affecting other parts. This leads to increased security 
of data*/

class ShrishtisClass{

    /*This is a setter function and a getter function. It is not a good programming practice to make your 
    variables public. This might lead to problems in a big program with a lot of classes and class members.
    Thus function setters/getters are used. They help us to access private variables.*/
    public:
        void setName(string x) /* In order to change "name" variable we use this function */
        {
            name = x;
        }
        string getName() /* In order to just get value of "name" variable we use this function */
        { 
            return name;
        } 

    private: /* The only things that have access to this private variable are other things inside its class */
        string name;
};

int main()
{
    ShrishtisClass so;
    so.setName("Thomas");
    cout<<so.getName()<<endl;
    return 0;
}