#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    rand(); // gives a random integer less than RAND_MAX, a constant defines in the library.

    // DICE
    for(int x = 0; x < 25; x++){
        cout << 1 + (rand()%6)<<endl;
    }
    // rand() is not truly random, because computers follow a certain algorithm/instructions to produce these
    // apparently random sequence of numbers. These algorithms are complex, which gives the appearance that it is 
    // random to humans. So if you run this code again and again, each time it will output the same sequence of 
    // random numbers.

    srand(45);
    rand();
    rand();
    rand();
    // srand(int) is a seed which allows us to get different output from rand() for different values we put in its 
    // parameters. So for srand(67) the outputs from all rand() will be different from srand(231). The number in the 
    // paramter changes the algorithm. However for the same seed, the output will always be the same.

    srand(time(0));
    rand();
    rand();
    rand();
    // ctime gives us access to the computers clock. time(0) calculates every second since Jan 1 1970. Now every second 
    // the time since then is changing, thus every second the seed is changing. Thus now we have created a sequence of 
    // numbers that is random and different everytime the program is executed. 
}