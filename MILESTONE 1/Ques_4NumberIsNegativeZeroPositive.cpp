#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num==0)
    {
	cout<<"this number is zero";
    }
    else if(num>0)
    {
	cout<<num<<" is the positive number";
    }
    else
    cout<<num<<" is the negative number";
    return 0;
}


