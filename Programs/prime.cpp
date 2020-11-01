//Someone else's code
// Function that checks whether n is prime or not
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int count;
    cin>>count;
    for(int n = 2; n < count; n=n)
    {
        bool isPrime = true;

   for(int i = 2; i <= floor(sqrt(n)); i++)
   {
      if (n%i == 0)
      {
         isPrime = false;
         break;
      }
   }
   if(isPrime==true)
   {
       cout<<n;
       n=n-1;
   }
       
    }
    return 0;
}

// My code, first type in how many numbers you want to check (might be buggy)

/*
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int t,x,sum;
    double n;
    cin>>t;
    while(t--)
    {
        x=2;
        cin>>n;
        int p,q;
        q = floor(n);
        p = floor(sqrt(n));
        sum = 0;
        while(x<=p)
        {
            if (q%x==0)
            {
                if(x!=(n/x))
                {
                    sum = sum + x + (n/x);
                }
                else
                {
                    sum = sum + x;
                }
            }
            x=x+1;
        }
        if(sum == 0){cout<<"YES \n";}
        else if((sum+1)==q)
        {
            cout<<"YES \n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
   return 0;
}

*/
