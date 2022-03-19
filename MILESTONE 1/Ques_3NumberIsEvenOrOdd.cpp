#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0)
    {
	cout<<num<<" is the even number";
    }
    else
    {
	cout<<num<<" is the odd number";
    }
    return 0;
}

