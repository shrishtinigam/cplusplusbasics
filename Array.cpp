 /* ARRAY - A collection of identical data objects, which are stored in 
    contiguous memory locations under a common variable name
    Elements can be accessed randomly using indices of an array.
    The data type must be the same for all elements */
/* Arrays in C++ are just memory buffers - so the contents are indeed mutable.*/

 // Arrays can be 1-D or multi-dimensional
 // Their indexing starts from 0 and goes upto to (length of array)

 #include <iostream>
 using namespace std;

 void printArray(int theArray[], int sizeOfArray);

 int main()
 {
    int Array1[5] = {1,2,3,4,5};   // Array intializer list with 5 Array elements
    int Array[] = {1,2,3,4,5,6};   // Not intializing the array size
    cout<<"This is the array's starting memory location"<<Array<<endl; // This prints the array's starting memory location

    cout << Array1[2]<<endl;  // Output is 3; Indexing starts from 0

    int Array2[10];   // Intializing array using Loop
    cout << "Element  -  Value" << endl;

    int Array4[6] = { 10, 20, 30, 40};
    Array4[3]=100;
    cout<<Array4[3]<<endl; // Arrays are mutable 
  
    // Compiler creates an array of size 6, initializes first 
    // 4 elements as specified by user and rest two elements as 0. 
    // above is same as  "int arr[] = {10, 20, 30, 40, 0, 0}" 

    for(int x = 0; x<10; x++){
        Array2[x] = 99;
        cout << x << "    -    "<< Array2[x] << endl;
    }
    /* Allows a fixed number of elements to be entered which is decided 
       at the time of declaration. Unlike a linked list, an array in C is not dynamic.*/
    /* Insertion and deletion of elements can be costly since the elements are needed 
       to be managed in accordance with the new memory allocation.*/
    
    /* Accessing, sorting, traversing (iterating over) elements in a C++ array is easy */
    // Calculation using array in a loop

    int Array3[5] = {21,34,45,56,67};
    int sum = 0;

    for (int x = 0; x<5; x++){
        sum+=Array3[x];
        cout << sum << endl;
    } 
    /*There is no index out of bounds checking in C/C++, the following program 
      compiles fine but may produce unexpected output when run */

    int Array5[2]; 
  
    cout << Array5[9] << " "; 
    cout << Array5[-2] << " "; 
  
    return 0;

    // C++ program to demonstrate that array elements 
    // are stored contiguous locations 
  

    /* An array of 10 integers. If arr[0] is stored at 
       address x, then arr[1] is stored at x + sizeof(int) 
       arr[2] is stored at x + sizeof(int) + sizeof(int) 
       and so on. */
       int arr[5], i; 
  
    cout << "Size of integer in this compiler is " << sizeof(int) << "\n"; 
  
    for (i = 0; i < 5; i++) 
        // The use of '&' before a variable name, yields address of variable. 
        cout << "Address arr[" << i << "] is " << &arr[i] << "\n"; 
   
   int Array7[] = {1, 2, 3, 4, 5, 6};
     
   int n = sizeof(Array7) / sizeof(Array7[0]); // Gives length of array


   
    int Array8[] = {1, 2, 3, 4, 5, 6};
    int n1 = sizeof(Array8) / sizeof(Array8[0]);
    printArray(Array8,n1); // Here just write arr not arr[]

 }

void printArray(int theArray[], int sizeOfArray){

    for(int x = 0; x< sizeOfArray; x++){
        cout << theArray[x] << endl;
    }
}



    