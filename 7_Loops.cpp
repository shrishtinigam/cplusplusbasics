#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Sentinel Control Loop
    int age;
    int ageTotal=0;
    int NoOfPeople = 0;

    cout<<"Enter first persons age or -1 to quit\n";
    cin>>age;
    while(age != -1){
        ageTotal = ageTotal + age;
        NoOfPeople++;

        cout << "Enter next persons age or -1 to quit" << endl;
        cin >> age;
    }

    cout<<"Number of people entered: " << NoOfPeople << endl;
    cout<<"Average age: " << ageTotal/NoOfPeople;

    // Do while loop - guarantees your code runs atleast one time
    int x;
    do{
        cout<<"\nEnter an odd number"<<endl;
        cin>>x;
    }while(x%2==0);

    //  While Loop
    cout<<"How many biscuits did you give me?";
    int biscuit;
    cin>>biscuit;
    int i = biscuit;
    while(i>=0){
        cout<<"I have "<<i<<" biscuits\n";
        cout<<"CHOMP\n";
        i = i-1;
    }

    // For Loop - Stock Market Simulator

    float a,p,r;
    cout<<"Principal Amount: ";
    cin>>p;
    cout<<"Rate in % ";
    cin>>r;
    r = r/100;
    for (int day = 1; day <= 30; day++){
        a = p* pow(1+r,day); // 1+r to the power day
        cout<< day << "--"<<a<<endl;
    }
    // Switch Case

    cout<<"Age: ";
    cin>>age;

    switch(age)
    {
        case 16:
            cout<<"Driving Permit "<<endl;
            break;
        case 18:
            cout<<"Lotto Tickets "<<endl;
            break;
        case 21:
            cout<<"Buy Beer "<<endl;
            break;
        default:
            cout<<"Have Lunch "<<endl;
    }


}