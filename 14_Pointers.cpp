 #include <iostream>
 using namespace std;

// POINTER is a variable that stores a memory address.
// STORES A MEMORY ADDRESS
// notes from https://youtu.be/iChalAKXffs
/*

For example, this is our ram -
ADDRESS    -     VALUE (each has 32 bits)
100  'c'   -       5
101        -
102  'a'   -       5
103        -
104  'b'   -      102
105        -
106        -
107        -
108        -
109        -

int a = 5
pointer b = &a
b = 102
--> &a provided the memory address of the variable a
int c = *b
c = 5
--> *b gets the value at the location pointed at by the pointer b.
    Here it is called the valueof operator.
(This asterisk has nothing to do with multiplication)

This is the basic understanding of the concept behind pointer.
In reality, there is no datatype called pointer.
Instead pointers are declared using an asterisk symbol. Again, this askterisk 
has nothing to do with multiplication and previous valueof operator representation.

int *b = &a
or
int* b = &a

both are valid

TAKE CARE OF DANGLING, WILD, NULL POINTERS
https://www.geeksforgeeks.org/dangling-void-null-wild-pointers/
https://www.geeksforgeeks.org/what-are-wild-pointers-how-can-we-avoid/
https://www.geeksforgeeks.org/few-bytes-on-null-pointer-in-c/
-------------------------------------------------------------
*/

int main() 
{
    
    void* ptr = NULL;      // This pointer is a NULL pointer
                        
    
    // 0 is not a valid memory address, but this won't lead to an error
    
    
    int fox = 5;
    int *foxPointer;
    foxPointer = &fox; // &fox gives the memory location of the variable fox
    // foxPointer is a pointer, so you don't have to put * in front of it everytime you use it
    /* This has to be kept in mind because putting the * in front like *foxPointer 
    makes it a valueof operator, meaning it will get the value at the location pointed at by the pointer.*/
    // foxpointer now has the the memory address of fox variable 
    // Again, foxpointer does not store the value stored in fox, it stores it's MEMORY ADDRESS.

    // To access or change the values through pointers, we use derefrencing
    // Dereferencing is used to access or manipulate data contained in memory location pointed to by a pointer

    *foxPointer = 10; // using the valueof operator we can change the value stored in the memory location pointed to by the pointer
    cout << fox << endl; // printing out the value of the variable fox
    cout << foxPointer << endl; // printing out the memory location of the variable fox
    cout << *foxPointer << endl; // again, printing out the value of the variable fox using valueof operator
    cout << &fox << endl;  // again, printing out the memory location of the variable fox using addressof operator

    // Difference between int* ptr and int *ptr (None) https://stackoverflow.com/questions/5590150/difference-between-int-p-and-int-p-declaration
    

    // This array will take up a contiguous meomory of 40 bytes
    int SomeArray[10];
    // These are two pointers pointing at element at 6 and 0
    int *pLocation6 = &SomeArray[6];
    int *pLocation0 = &SomeArray[0];
    // Now I'll display the value of the two pointers and also the difference between them
    cout << "pLocation6 = "<< (int)pLocation6 << endl;
    cout << "pLocation0 = "<< (int)pLocation0 << endl;
    cout << "Difference = "<< pLocation6-pLocation0 << endl;

    /* 
    The output of the above program is -
    pLocation6 = 38206876
    pLocation0 = 38206852
    Difference = 6

    The difference on observation between pLocation6 and pLocation0 is 24, but that is 24 bytes.
    Difference on subtraction comes out to be 6 (24/4=6) i.e. 6 integers are there between the two memory locations 
    (As integers take 4 bytes of space.)
    The main takeaway is that MEMORY ADDRESSES WORK ON A PER-BYTE BASIS, BUT THE POINTERS THEMSELVES WORK IN A SPACE 
    DEFINED BY THE TYPE OF OBJECT THEY ARE POINTING TO (in this case, an integer)
    */

    int AnotherArray[10] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};

    int *pLocation_0 = AnotherArray;
    /* As we learnt in arrays, 'AnotherArray' gives the memory location of the start of the array, so it can be directly 
    assigned to a pointer. The above is the same as the following - */
    int *pLocation__0 = &AnotherArray[0];

    // Now, lets print out the array and the memory location of each element

    for(int i = 0; i < 10; i++)
        cout << &AnotherArray[i] << " = " << AnotherArray[i] << endl;

    // This exact thing can be done in the following manner

    for(int i = 0; i < 10; i++)
        cout << AnotherArray + i << " = " << *(AnotherArray + i) << endl;

    /* We know that AnotherArray is just a pointer to the zeroth location of the array, 
    we can add the i value to AnotherArray. Due to pointer arithmetic, the pointer increases 
    by 4 bytes each time, or by the sizeof one integer. This will give us the memory
    location of the first byte all the elements. 
    Now if we put an * in front of AnotherArray + i, we get the value stored in that memory 
    location.*/

    // This exact thing can be done in another manner

    for(int i = 0; i < 10; i++)
    {
        cout << pLocation_0 << " = " << *pLocation_0 << endl;
        pLocation_0++;
    }

    /* The output of all three is the exact same, i.e.
    0x246fd44 = 3
    0x246fd48 = 6
    0x246fd4c = 9
    0x246fd50 = 12
    0x246fd54 = 15
    0x246fd58 = 18
    0x246fd5c = 21
    0x246fd60 = 24
    0x246fd64 = 27
    0x246fd68 = 30
    */

   /*The above is very important and is related to pointer arithmetic. Pointer math does not work 
    like regular math. When we added 1 to pLocation_0, instead of going from 0x246fd44 to 0x246fd45,
    it went to 0x246fd48. Whenever you add integers to a pointer, it doesn't change the memory address
    of that pointer, it changes what element it is pointing to. 

    To point to a certain element, the pointer has to store the memory location of that elements starting memory location.

    So for example, when we tried to add 1 to pLocation_0, it didn't change the memory address. What 
    it did is "I'm going to take your pointer and point to whatever element is 1 element away."
    If we added 2, it would point to the element 2 elements away, i.e. actually moved 8 bytes.
    Thus you are NOT CHANGING THE MEMORY ADDRESS, ONLY THE ELEMENT IT POINTS TO. */
   
   
   // Let's do the same example as about, except for using type integer, we use type char
   // An array of type char is a string

   char SomeString[] = "Hello!";

   char *pSomeString = SomeString;

   cout << "\npSomeString = " << pSomeString << endl;

   char *pLocation3 = &SomeString[3];
   char *pLocation___0 = &SomeString[0];

   cout << "pLocation3 = "<< (int)pLocation3 << endl; // type casting char to int
   cout << "pLocation___0 = "<< (int)pLocation___0 << endl;
   cout << "Difference = "<< pLocation3 - pLocation___0 << endl;

    /* The output of the above is -
    pSomeString = Hello!
    pLocation3 = 38206759
    pLocation___0 = 38206756
    Difference = 3

    Difference on observation between pLocation3 and pLocation___0 is 3, which makes sense as 
    the size of a char is one byte. This is same as Difference between the starting memory addresses
    of each character (3/1=3).
    */

   // Now lets remove the type casts and do the same thing

   char SomeString2[] = "Hello!";

   char *pSomeString2 = SomeString2;

   cout << "\npSomeString = " << pSomeString2 << endl;

   char *pLocation3_ = &SomeString2[3];
   char *pLocation0_ = &SomeString2[0];

   cout << "pLocation3_ = "<< pLocation3_ << endl; 
   cout << "pLocation0_ = "<< pLocation0_ << endl;
   cout << "Difference = "<< pLocation3_ - pLocation0_ << endl;

   /*
    pSomeString = Hello!
    pLocation3_ = lo!
    pLocation0_ = Hello!
    Difference = 3

    Here instead of the hexadecimal memory location we see fragments of the string.
    Infact, pLocation3_ starts from the third element of the string, and pLocation0_ starts 
    from the beginning of the string.

   */

  // Now instead of intializing the string we just intialized its length and did the same thing as above

   char SomeString3[10];

   char *pSomeString3 = SomeString3;

   cout << "\npSomeString = " << pSomeString3 << endl;

   char *pLocation3__ = &SomeString3[3];
   char *pLocation0__ = &SomeString3[0];

   cout << "pLocation3__ = "<< pLocation3__ << endl; 
   cout << "pLocation0__ = "<< pLocation0__ << endl;
   cout << "Difference = "<< pLocation3__ - pLocation0__ << endl;

   /*
    pSomeString =
    pLocation3__ =
    pLocation0__ =
    Difference = 3

    With chars and pointers of chars, is very common that you ar actually inferring a string.
    And so there is quite a lot of operators amongst many functions across C and C++ that expect 
    to see pointers of type char representing strings, and so they do string specific things, such 
    as here,pLocation3__ and pLocation0__ is being treated as a regular string (treated as the starting
    memory loction of a string which prints out every contiguous char until it comes across \0).
    Thats why we are not seeing the value of the address here, unless we explicitly cast it to an integer.
    
    Main takeaway is some functions will behave differently depending on the type of pointer they receive.
     
   */

  return 0;

}

