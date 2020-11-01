#include <iostream>
#include <cstdlib> // Allows us to access rand() and srand()
#include <ctime> // Allows us to access time

using namespace std;
//  Dice
int main()
{
    srand(time(0));

    for (int x = 1; x<25; x++){
        cout<< 1+(rand()%6)<<endl; //  %6 will limit the answers to 0 to 5, then add 1 to make the answers from 1 to 6.
    }
} 