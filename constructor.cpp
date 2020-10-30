#include<iostream>
#include<string>

using namespace std;

/* A constructor in C++ is a special method that is automatically called when 
an object of a class is created. 
* Constructors never have a return type.
* Name of the constructor is same as the name of the class to which it belongs
* A constructor is always public.
-> Constructors task is to intialize the variables of a class. Otherwise, they would 
get assigned random values (actually, the value that was already there in that memory space).
-> Whatever is in the constructor body, it will happen soon as an object is created */

class Profile{
    public:
        Profile(string z="John",string z1="18"){ /*Parameters of a constructor contain those variables that you want to intialize*/
            setName(z);     // A default arguement can be assigned to parameters in a function       
            setAge(z1);
        }
        void setName(string x) 
        {
            name = x;
        }
        void setAge(string x1)
        {
            age = x1;
        }
        string getName() 
        {
            return name;
        } 
        string getAge()
        {
            return age;
        }
    private:
    string name;
    string age;
};

int main()
{
    Profile Pobj1("Rogue","36");
    cout << Pobj1.getName() << endl;
    cout << Pobj1.getAge() << endl;

     /*Each objects you create from the same class will have its own set of variables
       Even though they are from the same class, they are not changing the same variable.
       They are each assigned a set of variables.
       Two different objects of same class donot overwrite each other.
       In essence, they are from the same template.*/

    Profile Pobj2("Kat","18");
    cout << Pobj2.getName() << endl;
    cout << Pobj2.getAge() << endl;

    Profile Pobj3("Nelle","26");
    cout << Pobj3.getName() << endl;
    cout << Pobj3.getAge() << endl;

    return 0;
}

// Programmers usually like to separate their classes into separate files because it makes it.
// Easier to work with and manage and edit later on.

/* A while loop example
    bacon = 0;
    while(bacon<=5)
    {
       cout<<"bacon is "<< bacon <<endl;
       bacon = bacon + 1;
    }
*/