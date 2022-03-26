#include<iostream>

using namespace std;

int main(){

   int *arr;

   int size;

   cout<<"Enter the size of array "<<endl;

   cin>>size;

   arr=new int[size];

   cout<<"Enter the elements"<<endl;

   for(int i=0;i<size;i++){

       cin>>arr[i];

   }

   int max=arr[0],min=arr[0];

   for(int i=0;i<size;i++){

       if(arr[i]>max){

           max=arr[i];

       }

       if(arr[i]<min){

           min=arr[i];

       }



   }

   cout<<"The pair that has the maximum difference is "<<max<<" "<<min<<endl;

}
