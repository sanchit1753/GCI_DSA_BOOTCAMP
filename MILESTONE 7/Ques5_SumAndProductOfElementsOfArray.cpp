#include<iostream>
using namespace std;
int main()
{
    int array[10],n,i,sum=0,product=1;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of array"<<endl;
    for(i=0;i<n;i++)
    cin>>array[i];
    for(i=0;i<n;i++){
        sum=sum+array[i];
        product=product*array[i];
    }
    cout<<"sum :"<<sum<<endl;
    cout<<"product :"<<product<<endl;
    return 0;
}
