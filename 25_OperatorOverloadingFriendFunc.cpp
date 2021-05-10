//https://www.decodejava.com/cpp-operator-overloading-with-friend-function.htm

#include<iostream>
using namespace std;
class complex{
	
	public:
	    int real,imag;
		complex(int x=0,int y=0)
		{
			real=x;
			imag=y;
		}
		void display()
		{
			cout<<"real="<<real<<"imag="<<imag << "\n";
		}
		friend complex operator + (complex compObj1, complex compObj2);
    };
    
complex operator+(complex compObj1, complex compObj2)//for c2
{
	complex temp;
    temp.real = compObj2.real+compObj1.real;
    temp.imag = compObj2.imag+compObj1.imag;
	return(temp);
}
int main()
{
	complex c1=complex(1,2);
	complex c2=complex(3,4);
	complex c3=complex(5,6);
	complex c4=c1+c2+c3;
	c4.display();
}