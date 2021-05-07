#include <iostream>
#include <string>

using namespace std;

/* A constructor in C++ is a special method that is automatically called when 
an object of a class is created. 
* Constructors never have a return type.
* Name of the constructor is same as the name of the class to which it belongs
* A constructor is always public.
* You can make multiple constructors,as long as their signature (the parameters they take) are 
  not the same
-> Constructors task is to intialize the variables of a class. Otherwise, they would 
get assigned random values (actually, the value that was already there in that memory space).
-> Whatever is in the constructor body, it will happen soon as an object is created */

/* For example, you have a class called car with variables name, color, company, make. Now 
you want make a list of 10 cars with this exact structure. In the regular way, you'd have to do
Car car1;
car2.name = "Baleno";
car2.color = "Blue";
car2.company = "Maruti Suzuki";
car2.make = 2017; 
10 times! That would take 50 lines of code! You have to manually specify what the name is going to be, 
what the color was going to be etc. This takes up time and space. Instead, you can use a constructor, 
and pass name, color, company, and make into the parameters of the object. Now the same program will 
take up only 10 lines of code. 

You can also use constructors to pre-assign template values.

If you want different types of cars, for example, you want a structure to be the form of name,
registration number, speed, you can make another constructor. Note you can make as many constructors 
as you may like if the all have different parameter signatures. If this is an issue, just make a new 
class.*/

// For introducing constructors, here is one without Encapsulation.

class Profile
{
public:
    string name;
    int age;
    string favcolor;
    string job;

    Profile(string Name, int Age, string Color)
    {
        name = Name;
        age = Age;
        favcolor = Color;
    }

    Profile(string Name, string Job)
    {
        name = Name;
        job = Job;
    }

    /* Another way contructors can be used is to make one with no parameters. 
       This can be used to only create objects with template variable values and later 
       on as and when necessary we can assign other values to those variables */
    Profile(){
        name = "John";
        age = 25;
        favcolor = "Black"; 
        job = "Farmer";
    }
};

int main()
{
    Profile P1obj1("Rogue", 36, "Red"); // The contents of the parameters of the object are addressed to the constructor
    cout << P1obj1.name << endl;
    cout << P1obj1.age << endl;
    cout << P1obj1.favcolor << endl;

    /* Each objects you create from the same class will have its own set of variables
       Even though they are from the same class, they are not changing the same variable.
       They are each assigned a set of variables.
       Two different objects of same class donot overwrite each other.
       In essence, they are from the same template.*/

    Profile P1obj2("Kate", 18, "Pink");
    cout << P1obj2.name << endl;
    cout << P1obj2.age << endl;
    cout << P1obj2.favcolor << endl;

    // You can still access and change the value like -

    P1obj2.favcolor = "Red";
    cout << P1obj2.favcolor << endl;

    Profile P3obj1;
    cout << P3obj1.name << endl;
    cout << P3obj1.age << endl;
    cout << P3obj1.favcolor << endl;
    P3obj1.name = "Rogue";
    P3obj1.age = 36;
    P3obj1.favcolor = "Red";
    cout << P3obj1.name << endl;
    cout << P3obj1.age << endl;
    cout << P3obj1.favcolor << endl;

    
    Profile P2obj1("Rogue", "YouTuber");
    cout << P2obj1.name << endl;
    cout << P2obj1.job << endl;

    Profile P2obj2("Kate", "Engineer");
    cout << P2obj2.name << endl;
    cout << P2obj2.job << endl;

    return 0;
}

// Programmers usually like to separate their classes into separate files because it makes it.
// Easier to work with and manage and edit later on.
