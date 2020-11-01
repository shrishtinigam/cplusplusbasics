#include <iostream>
#include <string>

using namespace std;

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