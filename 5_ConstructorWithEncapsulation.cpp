#include<iostream>
#include<string>

using namespace std;


/* Sometimes you'd want to control how the user interacts with the variables in a class,
and this can be done by adding rules etc in the setter function.*/


class Profile{
    public:
        Profile(string z="John",int z1=18){ /* Parameters of a constructor contain those variables that you want to intialize*/
            setName(z);     // A default arguement can be assigned to parameters in a function       
            setAge(z1);
        }
        // SETTERS
        void setName(string x) 
        {
            name = x;
        }
        void setAge(int x1)
        {
            if(x1<120){
                age = x1;  // A condition that limits how the user can interact with the variables. If the age is greater than 120, the age is set to -1.
            }
            else{
                age = -1;
            }
            
        }
        // GETTERS
        string getName() 
        {
            return name;
        } 
        int getAge()
        {
            return age;
        }

    private:
    string name;
    int age;
};

int main()
{
    Profile Pobj1("Rogue",36);
    cout << Pobj1.getName() << endl;
    cout << Pobj1.getAge() << endl;

    Profile Pobj2("Kat",18);
    cout << Pobj2.getName() << endl;
    cout << Pobj2.getAge() << endl;

    Profile Pobj3("Nelle",126);
    cout << Pobj3.getName() << endl;
    cout << Pobj3.getAge() << endl;

    return 0;
}

// Programmers usually like to separate their classes into separate files because it makes it.
// Easier to work with and manage and edit later on.

