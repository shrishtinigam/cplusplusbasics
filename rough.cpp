 #include <iostream>
 using namespace std;

// POINTERS store address of variables or a memory location.

int main() 
{
    int fox = 5;
    int *foxPointer;
    foxPointer = &fox;
    cout << foxPointer << endl;
    cout << &fox << endl; 
}

