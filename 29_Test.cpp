#include <iostream>
#include <string>
using namespace std;

// Source - https://youtu.be/EYuPBkgJtCQ

// Public, Protected, Private Inheritance
/*
    They specifies different access control from the derived class to the base class.
    Access Control:
    1. None of the derived classes can access anything that is private in B.
    2. D_pub inherits public members of B as public and the protected members of B as protected.
    3. D_priv inherits the public the protected members of B as private.
    4. D_prot inherits the public and protected members of B as protected.
*/


class B
{
    public:
        void f_pub()
        {
            cout << "f_pub is called. \n";
        }
    protected:
        void f_prot()
        {
            cout << "f_prot is called. \n";
        }
    private:
        void f_priv()
        {
            cout << "f_priv is called \n";
        }
};

class priv : private B
{
    void f()
    {
        f_pub();     //- Ok. pub's private function 
        f_prot();    //- Ok. pub's private function 
        // f_priv();   - Error. B's private function
    }
};

class prot : protected B
{
    void f()
    {
        f_pub();     //- Ok. prot's protected function 
        f_prot();    //- Ok. prot's protected function 
        // f_priv();   - Error. B's private function
    }
};

class pub : public B
{
    void f()
    {
        f_pub();     //- Ok. pub's public function
        f_prot();    //- Ok. pub'ss protected function
        // f_priv();   - Error. B's private function
    }
};

int main()
{
    pub D1;
    D1.f_pub();  // Ok. f_pub() is pub's public function

    prot D2;
    // D2.f_pub();  - Error, f_pub() is prot's protected function
    // Method to remove the above error is given in the youtube video at 6:20
    
}

